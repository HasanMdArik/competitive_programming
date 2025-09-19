#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, num;
    long long x, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        sum += num;
        arr[i] = num;
    }
    cin >> x;

    long long res = (long long)(x / sum) * n;
    long long rem = x % sum;
    long long pref = 0;
    int i = 0;
    while (i < n && pref <= rem)
    {
        pref += arr[i];
        i++;
    }
    res += i;

    cout << res;
    return 0;
}