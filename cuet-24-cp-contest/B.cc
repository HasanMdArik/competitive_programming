#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    int res = a;

    while (res >= a && res <= b)
    {
        if (res % c == 0)
        {
            cout << res;
            return 0;
        }

        res++;
    }

    cout << -1;

    return 0;
}