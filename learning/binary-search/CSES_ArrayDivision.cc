#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

bool isMaxSumPossible(vi &vec, ll maxSum, int k)
{
    int subArrays = 1;
    ll sum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (sum + vec[i] > maxSum)
        {
            subArrays++;
            sum = vec[i];
        }
        else
        {
            sum += vec[i];
        }
    }

    return subArrays <= k;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int maxVal = 0;
    vi vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        maxVal = max(maxVal, vec[i]);
    }

    ll l = maxVal, r = 1e18, mid, ans = maxVal;
    while (l <= r)
    {
        mid = (l + r) / 2;

        if (isMaxSumPossible(vec, mid, k))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans;

    return 0;
}