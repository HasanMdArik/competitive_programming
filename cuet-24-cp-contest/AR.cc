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

    auto hash = map<char, int>();
    for (int i = 0; i < s.length(); i++)
    {
        hash[s[i]]++;
    }

    char llc = (--hash.end())->first;
    string llps = "";
    for (int i = 0; i < (--hash.end())->second; i++)
    {
        llps.push_back(llc);
    }

    cout << llps;

    return 0;
}