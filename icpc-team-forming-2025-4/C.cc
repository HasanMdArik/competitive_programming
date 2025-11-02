#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

const unsigned long long size_a = 1e6 + 10;
mii used;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;

    int numCount = 0;
    for (int i = 1; i <= k; i++)
    {
        int startNum = i;

        for (int j = startNum; j <= n; j += k)
        {
            cout << j << " ";
        }
    }

    return 0;
}