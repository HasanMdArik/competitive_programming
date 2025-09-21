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

    int n, m;
    cin >> n >> m;

    char stat;
    auto crimeCoords = vector<pair<int, int>>();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> stat;
            if (stat == '*')
                crimeCoords.push_back({i, j});
        }
    }

    int x, y;
    // x determination
    if (crimeCoords[0].second == crimeCoords[2].second)
        x = crimeCoords[1].second;
    else if (crimeCoords[0].second == crimeCoords[1].second)
        x = crimeCoords[2].second;
    else
        x = crimeCoords[0].second;

    // y determination
    if (crimeCoords[0].first == crimeCoords[1].first)
        y = crimeCoords[2].first;
    else
        y = crimeCoords[0].first;

    cout
        << y + 1 << " " << x + 1;

    return 0;
}