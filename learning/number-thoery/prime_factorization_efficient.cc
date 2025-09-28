#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

vector<pair<ll, ll>> primeFactorizationEfficient(ll n);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;

    auto factors = primeFactorizationEfficient(n);
    for (int i = 0; i < factors.size(); i++)
    {
        cout << factors[i].first << "^" << factors[i].second << endl;
    }

    return 0;
}

vector<pair<ll, ll>> primeFactorizationEfficient(ll n)
{
    vector<pair<ll, ll>> factors;
    ll dup = n;
    if (n % 2 == 0)
    {
        ll k = 0;
        while (n % 2 == 0)
        {
            k++;
            n /= 2;
        }
        factors.push_back({2, k});
    }
    for (int i = 3; i * i < dup; i += 2)
    {
        if (n % i == 0)
        {
            ll k = 0;
            while (n % i == 0)
            {
                k++;
                n /= i;
            }
            factors.push_back({i, k});
        }
    }
    if (n > 1)
        factors.push_back({n, 1});

    return factors;
}