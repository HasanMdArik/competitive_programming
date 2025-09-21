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
    auto hash = mii();
    int shoe;
    for (int i = 0; i < 4; i++)
    {
        cin >> shoe;
        hash[shoe]++;
    }

    int res = 0;
    for (auto i = hash.begin(); i != hash.end(); i++)
    {
        res += (i->second - 1);
    }
    cout << res;

    return 0;
}