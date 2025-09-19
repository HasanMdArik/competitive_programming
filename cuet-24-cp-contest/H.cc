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

    int n;
    cin >> n;
    int num;
    auto hash = map<long long, long long>();

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        hash[num]++;
    }

    long long res = 0;
    for (auto &&i : hash)
    {
        for (auto &&j : hash)
        {
            if (i.first != j.first)
            {
                res += (i.first - j.first) * (i.first - j.first) * i.second * j.second;
            }
        }
    }

    cout << res / 2;

    return 0;
}