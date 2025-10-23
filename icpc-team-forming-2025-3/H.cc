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

    int c, n;

    cin >> c >> n;

    vi vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int pos = -1, lowestTempEndured = 51;
    n--;
    while (true)
    {
        int hT = vec[pos + 1], hTP = pos + 1;
        bool reachedEnd = false;
        int j = 0;
        for (int i = pos + 1; i <= n && j <= c; i++, j++)
        {
            if (vec[i] > hT)
            {
                hT = vec[i];
                hTP = i;
            }
            if (i == n)
                reachedEnd = true;
        }
        if (j - 1 == c)
            lowestTempEndured = min(lowestTempEndured, hT);
        pos = hTP;

        if (reachedEnd)
            break;
    }
    cout << lowestTempEndured;
    return 0;
}