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

    int Q[n + 1];

    int num;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        Q[num] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << Q[i] << " ";
    }

    return 0;
}