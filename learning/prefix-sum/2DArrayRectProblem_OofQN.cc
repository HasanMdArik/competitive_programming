#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

const unsigned long long N = 1e3 + 10;
int matrix[N][N];
int sum[N][N];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            cin >> matrix[row][col];
            sum[row][col] = sum[row][col - 1] + matrix[row][col];
        }
    }

    int q;
    cin >> q;
    int a, b, c, d;
    while (q--)
    {
        cin >> a >> b >> c >> d;

        long long res = 0;
        // Go row-wise and add the sum
        for (int row = a; row <= c; row++)
        {
            res += (sum[row][d] - sum[row][b - 1]);
        }

        cout << res << endl;
    }

    return 0;
}