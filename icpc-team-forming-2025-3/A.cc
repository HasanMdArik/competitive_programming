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
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int p1quad, p2quad;
    if (x1 > 0 && y1 > 0)
    {
        p1quad = 1;
    }
    else if (x1 < 0 && y1 > 0)
    {
        p1quad = 2;
    }
    else if (x1 < 0 && y1 < 0)
    {
        p1quad = 3;
    }
    else
    {
        p1quad = 4;
    }

    if (x2 > 0 && y2 > 0)
    {
        p2quad = 1;
    }
    else if (x2 < 0 && y2 > 0)
    {
        p2quad = 2;
    }
    else if (x2 < 0 && y2 < 0)
    {
        p2quad = 3;
    }
    else
    {
        p2quad = 4;
    }

    cout << (p1quad == p2quad ? 0 : 1) << endl;
    return 0;
}