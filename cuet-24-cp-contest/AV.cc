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
        long long num;
        cin >> num;
        int res = 0;
        while (num != 1)
        {
            if (num % 2 == 0)
            {
                num /= 2ll;
            }
            else if (num % 3 == 0)
            {
                num = num / 3ll * 2ll;
            }
            else if (num % 5 == 0)
            {
                num = num / 5ll * 4ll;
            }
            else
            {
                res = -1;
                break;
            }
            res++;
        }

        cout << res << endl;
    }
    return 0;
}