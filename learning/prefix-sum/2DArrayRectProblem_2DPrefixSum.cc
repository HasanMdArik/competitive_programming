#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

const unsigned long long N = 1e3 + 10;
int matrix[N][N];
long long pf[N][N];

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
            pf[row][col] = matrix[row][col] + pf[row - 1][col] + pf[row][col - 1] - pf[row - 1][col - 1];
        }
    }

    int q;
    cin >> q;
    int a, b, c, d;
    while (q--)
    {
        cin >> a >> b >> c >> d;

        cout << pf[c][d] - pf[a - 1][d] - pf[c][b - 1] + pf[a - 1][b - 1] << endl;
    }

    return 0;
}