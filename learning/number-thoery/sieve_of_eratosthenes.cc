#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

const unsigned long long MAX_ARRAY = 1e7 + 1;
bool isNotPrime[MAX_ARRAY] = {true, true};

void sieve(int n)
{
    if (n < 2)
        return;

    // Do it for 2
    for (unsigned long long d = 2 * 2; d <= n; d += 2)
    {
        isNotPrime[d] = true;
    }

    // Then for the 3 and other odd numbers
    for (int i = 3; i <= n; i += 2)
    {
        if (!isNotPrime[i])
            for (unsigned long long j = i * i; j <= n; j += i)
            {
                isNotPrime[j] = true;
            }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve(MAX_ARRAY - 1);

    for (int i = 1; i <= 100; i++)
    {
        if (!isNotPrime[i])
            cout << i << " ";
    }

    return 0;
}