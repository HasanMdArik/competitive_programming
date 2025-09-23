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

    long long N;
    cin >> N;

    int len = to_string(N).length();

    int p10[13] = {1};
    for (int i = 1; i < 13; i++)
    {
        p10[i] = p10[i - 1] * 10;
    }

    int res = 0;

    for (int i = 1; i <= 6; i++)
    {
        int length = 2 * i;

        if (length < len)
        {
            res += 9 * p10[i - 1];
        }
        else if (length == len)
        {
            int firstHalfDigits = N / p10[i];
            res += firstHalfDigits - p10[i - 1];
            if (N % p10[i] >= firstHalfDigits)
                res++;
        }
    }

    cout << res;

    return 0;
}