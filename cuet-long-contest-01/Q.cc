#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long x;
    cin >> x;

    long long dup = x;

    int num = 1;
    while (dup != 1)
    {
        num++;
        dup /= num;
    }

    cout << num;

    return 0;
}