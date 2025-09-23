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
    auto arr = vi(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int minSum = 100 * k;
    int startOfConsecutivePlanks = 0;

    for (int i = 0; i <= n - k; i++)
    {
        int sum = 0;
        for (int j = i; j - i < k; j++)
        {
            sum += arr[j];
        }
        if (sum < minSum)
        {
            minSum = sum;
            startOfConsecutivePlanks = i;
        }
    }

    cout << startOfConsecutivePlanks + 1;

    return 0;
}