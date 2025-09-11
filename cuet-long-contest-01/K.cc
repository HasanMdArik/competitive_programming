#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int A[(n + 1)], B[(n + 1)], C[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> B[i];
    }
    for (int i = 1; i < n; i++)
    {
        cin >> C[i];
    }

    int lastDish = -1, dish, points = 0;
    for (int i = 1; i <= n; i++)
    {
        dish = A[i];
        points += B[dish];

        if ((dish - lastDish) == 1)
            points += C[lastDish];

        lastDish = dish;
    }

    cout << points;

    return 0;
}