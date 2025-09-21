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
    int n, m;
    cin >> n >> m;

    int a = 0, b = 0;

    int res = 0;
    while (a * a + b <= n && a + b * b <= m)
    {
        while (a * a + b <= n && a + b * b <= m)
        {
            if (a * a + b == n && a + b * b == m)
                res++;
            b++;
        }

        b = 0;
        a++;
    }

    cout << res;
    return 0;
}