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

    long long k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    long long numOf256 = min(k2, min(k5, k6));
    k2 -= numOf256;
    long long numOf32 = min(k2, k3);
    cout << 256ll * numOf256 + 32ll * numOf32;
    return 0;
}