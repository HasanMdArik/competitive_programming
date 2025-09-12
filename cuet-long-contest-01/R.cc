#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    int arr[n + 1] = {0}, num;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr[num]++;
    }

    for (int i = 1; i <= n + 1; i++)
    {
        if (!arr[i])
        {
            cout << i;
            break;
        }
    }

    return 0;
}