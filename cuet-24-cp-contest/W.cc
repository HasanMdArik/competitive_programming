#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

int main()
{

    ll n, k, x;
    cin >> n >> k >> x;

    auto a = vi(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans += a[i];

    ll m = 0;
    for (int i = 0; i < n; i++)
        m += a[i] / x;
    m = min(m, k);
    ans -= m * x, k -= m;

    for (int i = 0; i < n; i++)
        a[i] %= x;
    sort(a.begin(), a.end());

    for (int i = n - 1; i >= 0; i--)
    {
        if (k == 0)
            break;
        ans -= a[i], k--;
    }

    cout << ans;

    return 0;
}
