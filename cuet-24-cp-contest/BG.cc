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

    int numOfA = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a')
            numOfA++;
    }

    cout << min((int)s.length(), 2 * numOfA - 1);

    return 0;
}