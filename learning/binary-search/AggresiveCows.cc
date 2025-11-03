#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

bool isConfigPossible(vi &stalls, int dist, int c)
{
    int stallsMaintainingDist = 1;

    int prevStall = stalls[0];
    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - prevStall >= dist)
        {
            stallsMaintainingDist++;
            prevStall = stalls[i];
        }
    }

    return stallsMaintainingDist >= c;
}

void solve()
{
    int n, c;
    cin >> n >> c;

    vi stalls(n);
    for (int i = 0; i < n; i++)
        cin >> stalls[i];

    sort(stalls.begin(), stalls.end());

    ll l = 1, r = 1e9, mid, res = 1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (isConfigPossible(stalls, mid, c))
        {
            res = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << res << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}