#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

// Given an array of size n, and q queries where each query contains two indices l and r and for
// each query we have to print the sum of elements between indices l and r inclusive.
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    auto a = vi(n + 1);

    auto sum = vi(n + 1);
    sum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }

    int l, r;
    while (q--)
    {
        cin >> l >> r;
        cout << sum[r] - sum[l - 1] << endl;
    }

    return 0;
}