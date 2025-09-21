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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        auto a = vi(n);
        auto b = vi(n);
        int minCandies = 1e9, minOranges = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            minCandies = min(a[i], minCandies);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            minOranges = min(b[i], minOranges);
        }

        long long res = 0;
        for (int i = 0; i < n; i++)
        {
            res += max(a[i] - minCandies, b[i] - minOranges);
        }
        cout << res << endl;
    }
    return 0;
}