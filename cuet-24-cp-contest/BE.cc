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

    string s;
    cin >> s;

    int hIdx = -1, eIdx = -1, l1Idx = -1, l2Idx = -1, oIdx = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (hIdx == -1 && s[i] == 'h')
        {
            hIdx = i;
        }
        else if (hIdx != -1 && eIdx == -1 && s[i] == 'e')
        {
            eIdx = i;
        }
        else if (hIdx != -1 && eIdx != -1 && l1Idx == -1 && s[i] == 'l')
        {
            l1Idx = i;
        }
        else if (hIdx != -1 && eIdx != -1 && l1Idx != -1 && l2Idx == -1 && s[i] == 'l')
        {
            l2Idx = i;
        }
        else if (hIdx != -1 && eIdx != -1 && l1Idx != -1 && l2Idx != -1 && oIdx == -1 && s[i] == 'o')
        {
            oIdx = i;
        }
    }

    if (hIdx >= 0 && eIdx > hIdx && l1Idx > eIdx && l2Idx > l1Idx && oIdx > l2Idx)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}