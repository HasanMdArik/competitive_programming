#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        if (n == m)
            cout << l << " " << r << endl;
        else
        {
            int lp, rp;
            if (r >= m)
            {
                lp = 0;
                rp = m;
            }
            else
            {
                rp = r;
                lp = -(m - r);
            }
            cout << lp << " " << rp << endl;
        }
    }
    return 0;
}