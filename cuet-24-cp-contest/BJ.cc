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
        int x, n, m;
        cin >> x >> n >> m;

        while (n > 0)
        {
            if (x > 20)
            {
                x = (x / 2) + 10;
            }
            n--;
        }

        x -= 10 * m;

        if (x > 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}