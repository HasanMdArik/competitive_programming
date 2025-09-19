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
        int n, x;
        cin >> n >> x;

        vi arr = vi(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end(), greater<int>());

        int strIdx = -1, res = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= x)
                res++;
            else
            {
                if (strIdx != -1)
                {
                    if ((i - strIdx + 1) * arr[i] >= x)
                    {
                        res++;
                        strIdx = -1;
                    }
                }
                else
                {
                    strIdx = i;
                }
            }
        }

        cout << res << endl;
    }
    return 0;
}