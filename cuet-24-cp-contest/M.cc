#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    if (!(cin >> n >> x))
        return 0;

    map<int, vector<int>> idxMap;
    for (int i = 1, a; i <= n; ++i)
    {
        cin >> a;
        idxMap[a].push_back(i);
    }

    for (auto it = idxMap.begin(); it != idxMap.end(); ++it)
    {
        int num = it->first;
        if (num > (x + 1) / 2)
            break;

        if (num != x - num)
        {
            auto jt = idxMap.find(x - num);
            if (jt != idxMap.end() && !jt->second.empty())
            {
                cout << it->second[0] << ' ' << jt->second[0] << '\n';
                return 0;
            }
        }
        else if (it->second.size() > 1)
        {
            cout << it->second[0] << ' ' << it->second[1] << '\n';
            return 0;
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
