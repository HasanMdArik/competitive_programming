#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

void checkForPatternAndFill(vector<vector<char>> &grid, int sR, int sC)
{
    // It is sure that grid[sR][sC] == '.' is true
    if (
        grid[sR + 1][sC] == '.' &&
        grid[sR + 1][sC - 1] == '.' &&
        grid[sR + 1][sC + 1] == '.' &&
        grid[sR + 2][sC] == '.')
    {
        grid[sR][sC] = '#';
        grid[sR + 1][sC] = '#';
        grid[sR + 1][sC - 1] = '#';
        grid[sR + 1][sC + 1] = '#';
        grid[sR + 2][sC] = '#';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    auto grid = vector<vector<char>>(n, vector<char>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (grid[i][j] == '.')
                checkForPatternAndFill(grid, i, j);
        }
    }

    bool filled = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == '.')
            {
                filled = false;
                break;
            }
        }
    }

    cout << (filled ? "YES" : "NO");

    return 0;
}