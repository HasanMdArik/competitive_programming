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

    int n, t;
    cin >> n >> t;

    vi pSum(n + 1);
    pSum[0] = 0;
    int num;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        pSum[i] = pSum[i - 1] + num;
    }

    int result = 0;
    for (int pos = 1; pos <= n; pos++)
    {
        int subVal = pSum[pos - 1];
        int l = pos, r = n, mid, res = 0;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (pSum[mid] - subVal > t)
                r = mid - 1;
            else
            {
                res = mid - pos + 1;
                l = mid + 1;
            }
        }
        result = max(result, res);
    }

    cout << result;

    return 0;
}