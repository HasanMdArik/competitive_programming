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
        int n;

        cin >> n;

        int arr[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        int arrOfNums[n * 2 + 1] = {0};

        for (int i = 0; i < n; i++)
        {
            arrOfNums[arr[0][i]]++;
        }
        for (int i = 1; i < n; i++)
        {
            arrOfNums[arr[i][(n - 1)]]++;
        }

        for (int i = 1; i <= 2 * n + 1; i++)
        {
            if (arrOfNums[i] == 0)
            {
                cout << i << ' ';
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[0][i] << ' ';
        }
        for (int i = 1; i < n; i++)
        {
            cout << arr[i][(n - 1)] << ' ';
        }
        cout << endl;
    }
    return 0;
}