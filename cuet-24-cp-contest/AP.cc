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

    auto hash = uii();

    for (int i = 0; i < s.length(); i++)
    {
        hash[s[i]]++;
    }

    int distChar = 0;
    for (auto i = hash.begin(); i != hash.end(); i++)
    {
        distChar++;
    }

    if (distChar % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}