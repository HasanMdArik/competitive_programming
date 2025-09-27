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
    int n, k;
    cin >> n >> k;

    auto a = vi(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    auto b = vi(k);
    for (int i = 0; i < k; i++)
    {
        cin >> b[i];
    }

    int maxTaste = a[0];
    for (int i = 0; i < n; i++)
    {
        maxTaste = max(maxTaste, a[i]);
    }

    auto maxTasteIdxes = vi();
    for (int i = 0; i < n; i++)
    {
        if (a[i] == maxTaste)
            maxTasteIdxes.push_back(i + 1);
    }

    bool hasChance = false;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < maxTasteIdxes.size(); j++)
        {
            if (b[i] == maxTasteIdxes[j])
            {
                hasChance = true;
                break;
            }
        }
        if (hasChance)
            break;
    }

    cout << (hasChance ? "Yes" : "No");

    return 0;
}