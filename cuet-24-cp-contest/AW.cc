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
    int sum = 0, pI;
    for (int i = 0; i < n; i++)
    {
        cin >> pI;
        sum += pI;
    }

    float res = (float)sum/n;

    cout << res;

    return 0;
}