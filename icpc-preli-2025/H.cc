#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

bool isSynthesisPossible(map<int, pair<int, int>> &pToR, set<int> &res, int p)
{
    if (res.find(p) != res.end())
    {
        return true;
    }

    auto reactants = pToR.find(p);
    if (reactants == pToR.end())
    {
        return false;
    }

    int x = reactants->second.first;
    int y = reactants->second.second;

    bool isXPossible = res.find(x) != res.end();
    bool isYPossible = res.find(y) != res.end();

    if (!isXPossible)
    {
        auto form = pToR.find(x);
        if (form != pToR.end())
        {
            auto rs = form->second;
            if (isSynthesisPossible(pToR, res, rs.first) && isSynthesisPossible(pToR, res, rs.second))
            {
                res.insert(x);
                isXPossible = true;
            }
        }
    }

    if (!isYPossible)
    {
        auto form = pToR.find(y);
        if (form != pToR.end())
        {
            auto rs = form->second;
            if (isSynthesisPossible(pToR, res, rs.first) && isSynthesisPossible(pToR, res, rs.second))
            {
                res.insert(y);
                isYPossible = true;
            }
        }
    }

    return isXPossible && isYPossible;
}

void solve()
{
    int n, m;

    cin >> n >> m;

    int num;
    set<int> res;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        res.insert(num);
    }

    int x, y, z;
    pair<int, int> r;
    map<int, pair<int, int>> pToR;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y >> z;
        r = {x, y};
        pToR[z] = r;
    }

    for (auto i = pToR.begin(); i != pToR.end(); i++)
    {
        if (res.find(i->first) == res.end() && isSynthesisPossible(pToR, res, i->first))
        {
            res.insert(i->first);
        }
    }

    cout << res.size() << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}