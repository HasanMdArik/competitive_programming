#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

string toLowerCase(string &s)
{
    string res = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            res.push_back(s[i] + 32);
        }
        else
        {
            res.push_back(s[i]);
        }
    }

    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;
    s1 = toLowerCase(s1), s2 = toLowerCase(s2);

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] < s2[i])
        {
            cout << -1;
            return 0;
        }
        else if (s1[i] > s2[i])
        {
            cout << 1;
            return 0;
        }
    }

    cout << 0;

    return 0;
}