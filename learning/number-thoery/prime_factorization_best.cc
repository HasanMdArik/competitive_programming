#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

const unsigned long long MAX_ARRAY = 1e7 + 1;
int spf[MAX_ARRAY];

// O(nlog(log(n)))
void precomputeSPF(int n)
{
    if (n < 2)
        return;

    // Count SPF of even numbers(that's 2)
    spf[2] = 2;
    for (unsigned long long i = 2 * 2; i < n; i += 2)
    {
        spf[i] = 2;
    }

    for (unsigned long long i = 3; i <= n; i += 2)
    {
        if (spf[i] == 0)
        {
            spf[i] = i;

            for (unsigned long long j = i * i; j <= n; j += i)
            {
                if (spf[j] != 0)
                    spf[j] = min(spf[j], (int)i);
                else
                    spf[j] = i;
            }
        }
    }
}

bool isPrime(int n)
{
    return spf[n] == n;
}

// O(log(n))
vector<pair<int, int>> primeFactorization_best(int n)
{
    vector<pair<int, int>> res;
    int _spf, count;
    while (n > 1)
    {
        count = 0;
        _spf = spf[n];

        while (n % _spf == 0)
        {
            n /= _spf;
            count++;
        }

        res.push_back({_spf, count});
    }

    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precomputeSPF(MAX_ARRAY - 1);

    int n;
    cin >> n;

    auto primeFactors = primeFactorization_best(n);

    for (int i = 0; i < primeFactors.size(); i++)
    {
        cout << primeFactors[i].first << "^" << primeFactors[i].second << endl;
    }

    return 0;
}