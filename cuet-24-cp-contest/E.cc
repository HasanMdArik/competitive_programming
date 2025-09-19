#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    auto count = unordered_map<int, int>();
    auto enc = unordered_map<int, int>();
    auto arr = vector<int>(n);

    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr[i] = num;
        count[num]++;
    }

    long long res = 0;
    for (int i = 0; i < n; i++)
    {
        num = arr[i];
        enc[num]++;

        res += (n - 1 - i - count[num] + enc[num]);
    }
    cout << res;

    return 0;
}