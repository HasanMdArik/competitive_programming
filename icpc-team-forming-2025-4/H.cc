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

    int hash[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        hash[s[i] - 'a']++;
    }

    int oddOccurs = 0;
    for (int i = 0; i < 26; i++)
    {
        if (hash[i] % 2)
        {
            oddOccurs++;
        }
    }

    if (oddOccurs <= 1)
        cout << "yes";
    else
        cout << "no";

    return 0;
}