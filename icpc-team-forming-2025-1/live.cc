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
    ll mean = 0;
    int num;
    vi vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        mean += num;
        vec[i] = num;
    }

    mean /= n;

    int targetNum;
    int maxDist = (k + 1) / 2;
    if (mean % k >= maxDist) {
        
    } else {

    }

    cout << mean;

    return 0;
}