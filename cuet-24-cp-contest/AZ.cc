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

    string name;
    int before, after;

    bool surpassedRedWhoDidGood = false;
    while (n-- && !surpassedRedWhoDidGood)
    {
        cin >> name >> before >> after;

        if (before >= 2400 && (after - before) > 0)
            surpassedRedWhoDidGood = true;
    }

    if (surpassedRedWhoDidGood)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}