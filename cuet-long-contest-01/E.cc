#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int isBad = 0;

    for (int i = 1; i < s.length(); i++)
    {
        if (s[(i - 1)] == s[i])
        {
            isBad = 1;
            break;
        }
    }

    if (isBad)
        cout << "Bad";
    else
        cout << "Good";

    return 0;
}