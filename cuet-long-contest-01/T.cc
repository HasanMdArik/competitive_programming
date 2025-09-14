#include <bits/stdc++.h>
using namespace std;

//! Not Done
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int startIdx = -1, len, maxLen = 1;
    bool repStreak = false;

    for (int i = 1; i < s.length(); i++)
    {
        if (s[(i - 1)] == s[i])
        {
            if (!repStreak)
            {
                startIdx = i - 1;
                repStreak = true;
            }
        }
        else if (repStreak)
        {
            repStreak = false;
            len = i - startIdx;
            if (len > maxLen)
                maxLen = len;
        }

        if (i == s.length() - 1 && repStreak)
        {
            len = i - startIdx + 1;
            if (len > maxLen)
                maxLen = len;
        }
    }

    cout << maxLen << endl;

    return 0;
}