#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c;
    cin >> r >> c;

    int res = 1;

    if (r == 1 || r == 15 || c == 1 || c == 15)
        res = 0;
    if (r == 3 && c != 2 && c != 14 ||
        c == 3 && r != 2 && r != 14 ||
        r == 13 && c != 2 && c != 14 ||
        c == 13 && r != 2 && r != 14)
        res = 0;
    if (r == 5 && c != 2 && c != 4 && c != 12 && c != 14 ||
        c == 5 && r != 2 && r != 4 && r != 12 && r != 14 ||
        r == 11 && c != 2 && c != 4 && c != 12 && c != 14 ||
        c == 11 && r != 2 && r != 4 && r != 12 && r != 14)
        res = 0;

    if (r == 7 && c != 2 && c != 4 && c != 6 && c != 10 && c != 12 && c != 14 ||
        c == 7 && r != 2 && r != 4 && r != 6 && r != 10 && r != 12 && r != 14 ||
        r == 9 && c != 2 && c != 4 && c != 6 && c != 10 && c != 12 && c != 14 ||
        c == 9 && r != 2 && r != 4 && r != 6 && r != 10 && r != 12 && r != 14)
        res = 0;

    if (res)
        cout << "white";
    else
        cout << "black";

    return 0;
}