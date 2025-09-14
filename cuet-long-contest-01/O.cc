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
        int n, k;
        cin >> n >> k;

        int zeros = 0, ones = 0;
        char bit;
        for (int i = 0; i < n; i++)
        {
            cin >> bit;
            if (bit == '0')
                zeros++;
            else
                ones++;
        }
        int maxPossible = zeros / 2 + ones / 2, minPossible;
        if (maxPossible == k)
            cout << "YES\n";
        else if (maxPossible < k)
            cout << "NO\n";
        else
        {
            while (k--)
            {
                if (zeros > ones)
                    zeros -= 2;
                else
                    ones -= 2;
            }

            if (ones == zeros)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}