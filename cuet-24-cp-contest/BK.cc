#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

int isAnotherTurnPossible(string s)
{
    int startIdx = -1;

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] != s[i - 1])
        {
            startIdx = i - 1;
            break;
        }
    }

    return startIdx;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;

        cin >> s;

        int turns = 0;

        int startIdx;
        while ((startIdx = isAnotherTurnPossible(s)) != -1)
        {
            turns++;
            s.erase(startIdx, 2);
        }

        if (turns % 2)
            cout << "DA\n";
        else
            cout << "NET\n";
    }
    return 0;
}