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
    int n, k;
    cin >> n >> k;

    vi vec(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> vec[i];
    }

    int start = (k + 1) / 2 + 1, end = n - (k / 2);
    if (k % 2 == 0)
    {
        for (int i = start; i <= end; i++)
        {
            cout << vec[i] << " ";
        }
    }
    else
    {
        for (int i = end; i >= start; i--)
        {
            cout << vec[i] << " ";
        }
    }

    return 0;
}