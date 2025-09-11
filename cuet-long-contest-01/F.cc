#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    while (1)
    {
        cout << n << ' ';
        if (n == 1)
            break;

        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
    }

    return 0;
}