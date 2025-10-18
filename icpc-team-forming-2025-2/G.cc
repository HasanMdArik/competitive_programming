#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

bool isGoingPossible(map<char, vector<char>> &dirMap, char pos, char to, int depth)
{
    if (pos == to && depth > 0)
        return true;

    auto paths = dirMap[pos];
    if (paths.size() == 0)
    {
        if (pos == to && depth > 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (paths.size() == 1)
    {
        return isGoingPossible(dirMap, paths[0], to, (depth + 1));
    }
    else
    {
        return isGoingPossible(dirMap, paths[0], to, (depth + 1)) || isGoingPossible(dirMap, paths[1], to, (depth + 1));
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // input
    char i1, i2;
    string direction;
    map<char, vector<char>> dirMap;
    for (int i = 0; i < 4; i++)
    {
        cin >> i1 >> direction >> i2;
        char from = i1, to = i2;
        if (direction == "<-")
        {
            from = i2, to = i1;
        }

        dirMap[from].push_back(to);
    }

    // process & output
    int t;
    cin >> t;
    while (t--)
    {
        char from, to;
        cin >> from >> to;
        cout << (isGoingPossible(dirMap, from, to, 0) ? "YES\n" : "NO\n");
    }

    return 0;
}