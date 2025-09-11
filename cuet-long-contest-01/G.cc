#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int year;
        cin >> year;

        int rootYear = (int)sqrt(year);

        if (rootYear * rootYear != year)
            cout << "-1\n";
        else
            cout << (rootYear) << " 0\n";
    }
    return 0;
}