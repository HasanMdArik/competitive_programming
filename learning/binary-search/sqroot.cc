#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

// 4-digit precision square root function using binary search(Max range of num, 1e18)
long double sqroot(long double num)
{
    long double l = 0.0, r = 1e9, mid, res = 0.00;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (mid * mid <= num)
        {
            res = mid;
            l = mid + 0.00001;
        }
        else
        {
            r = mid - 0.00001;
        }
    }

    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long double num;
    cin >> num;

    cout << fixed << setprecision(4) << sqroot(num) << endl;

    return 0;
}