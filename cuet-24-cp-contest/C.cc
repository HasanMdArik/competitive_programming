#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int res = 0, nuts;
    for (int i = 0; i < n; i++)
    {
        cin >> nuts;

        if (nuts > 10)
            res += (nuts - 10);
    }

    cout << res;

    return 0;
}