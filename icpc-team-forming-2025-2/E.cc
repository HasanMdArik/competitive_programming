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

    int p;
    cin >> p;

    if (p >= 18)
    {
        int t;
        cin >> t;
        int sum = t + p;
        if (sum >= 60)
        {
            cout << "Passed";
        }
        else
        {
            cout << "Failed";
        }
    }
    else
    {
        cout << "Failed";
    }

    return 0;
}