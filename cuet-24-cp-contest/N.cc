#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    auto idxMap = map<int, vector<int>>();
    int num;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        idxMap[num].push_back(i);
    }

    int x, k;
    while (q--)
    {
        cin >> x >> k;
        auto it = idxMap.find(x);
        if (it != idxMap.end() && it->second.size() >= k)
        {
            cout << it->second[k - 1] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}