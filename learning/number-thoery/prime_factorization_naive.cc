#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

bool isPrimeOptimal(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

void printPrimeFactorsNaive(int n)
{
    if (n < 2)
        return;

    auto restFactors = vi();
    for (int i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            restFactors.push_back(n / i);

            if (isPrimeOptimal(i))
            {
                int m = 0;
                int dup = n;
                while (dup % i == 0)
                {
                    dup /= i;
                    m++;
                }

                cout << i << " ^ " << m << endl;
            }
        }
    }

    for (int i = restFactors.size() - 1; i >= 0; i--)
    {
        int num = restFactors[i];
        if (isPrimeOptimal(num))
        {
            int m = 0;
            int dup = n;
            while (dup % num == 0)
            {
                dup /= num;
                m++;
            }

            cout << num << " ^ " << m << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    printPrimeFactorsNaive(n);

    return 0;
}