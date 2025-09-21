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

    int n;
    cin >> n;
    string s;
    char ch;
    long long res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        ch = s[0];
        if (ch == 'I')
            res += 20;
        else if (ch == 'D')
            res += 12;
        else if (ch == 'O')
            res += 8;
        else if (ch == 'C')
            res += 6;
        else
            res += 4;
    }
    cout << res;

    return 0;
}