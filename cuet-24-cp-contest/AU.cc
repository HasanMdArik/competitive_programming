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

    int n, a, b, passengers = 0, capNeeded = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        passengers = passengers - a + b;
        capNeeded = max(capNeeded, passengers);
    }

    cout << capNeeded;

    return 0;
}