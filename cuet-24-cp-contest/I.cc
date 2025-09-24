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

    long long n;
    cin >> n;

    unordered_set<long long> seen;
    for (long long a = 2; a * a <= n; ++a)
    {
        long long v = a * a; // start at b = 2
        while (v <= n)
        {
            seen.insert(v);
            if (v > n / a)
                break; // avoid overflow on v *= a
            v *= a;
        }
    }

    cout << (n - (long long)seen.size()) << '\n';
    return 0;
}