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
    int res = 0;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) >= 2)
            res++;
    }
    cout << res;
    return 0;
}