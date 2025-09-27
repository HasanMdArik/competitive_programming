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

    int startOfConsecutivePlanks = 0;

    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    int minSum = sum;
    int firstIndex = 0;
    for (int i = k; i < n; i++)
    {
        sum = sum - arr[firstIndex] + arr[i];
        firstIndex++;
        if (sum < minSum)
        {
            minSum = sum;
            startOfConsecutivePlanks = firstIndex;
        }
    }

    cout << startOfConsecutivePlanks + 1;

    return 0;
}