#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

bool isHeightPossible(vi &vec, ll x, ll h)
{
    ll w = 0;

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] < h)
        {
            w += (h - vec[i]);
        }
    }

    return w <= x;
}

void solve()
{
    int n, x;
    cin >> n >> x;

    vi vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    ll res = 1, l = 1, r = 1e10, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;

        if (isHeightPossible(vec, x, mid))
        {
            res = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
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