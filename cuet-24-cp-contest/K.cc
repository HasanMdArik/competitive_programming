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

    int n, w;
    cin >> n >> w;

    int a, b;
    auto vec = vector<pair<int, int>>(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        vec[i] = {a, b};
    }

    sort(vec.begin(), vec.end(), greater<pair<int, int>>());

    long long res = 0;
    int used = 0;
    for (int i = 0; i < n; i++)
    {
        if ((w - used) >= vec[i].second)
        {
            res += (long long)vec[i].first * vec[i].second;
            used += vec[i].second;
        }
        else
        {
            res += (long long)vec[i].first * (w - used);
            used = w;
            break;
        }
    }

    cout << res;

    return 0;
}