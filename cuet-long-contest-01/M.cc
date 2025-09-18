#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

int solve(vector<vi> matrix)
{
    int res = 0;
    int sR = matrix.size() - 1, sC = 0, eR = matrix.size() - 1, eC = 0;
    while (sR >= 0)
    {
        int minValley = 0;
        for (int i = sR, j = sC; i <= eR && j <= eC; i++)
        {
            if (matrix[i][j] < minValley)
                minValley = matrix[i][j];
            j++;
        }
        res -= minValley;
        sR--;
        eC++;
    }
    sR = 0, sC = matrix.size() - 1, eR = 0, eC = matrix.size() - 1;
    while (sC > 0)
    {
        int minValley = 0;
        for (int i = sR, j = sC; i <= eR && j <= eC; i++)
        {
            if (matrix[i][j] < minValley)
                minValley = matrix[i][j];
            j++;
        }
        res -= minValley;
        sC--;
        eR++;
    }

    return res;
}

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
        vector<vi> matrix = vector<vi>(n, vi(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }

        cout << solve(matrix) << endl;
    }
    return 0;
}