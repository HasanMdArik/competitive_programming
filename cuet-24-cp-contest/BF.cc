#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

void printNum(int abc, int ab, int bc, int ca)
{
    cout << abc - ab << " " << abc - bc << " " << abc - ca;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;

    int abc = max(max(x1, x2), max(x3, x4));
    if (abc == x1)
    {
        printNum(abc, x2, x3, x4);
    }
    else if (abc == x2)
    {
        printNum(abc, x1, x3, x4);
    }
    else if (abc == x3)
    {
        printNum(abc, x1, x2, x4);
    }
    else
    {
        printNum(abc, x1, x2, x3);
    }

    return 0;
}
