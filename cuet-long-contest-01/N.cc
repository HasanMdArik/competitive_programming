#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    auto numMap = map<int, int>();

    int n;
    cin >> n;

    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (numMap.find(a) == numMap.end())
        {
            numMap[a] = 1;
        }
    }

    int res = 0;
    for (auto &&i : numMap)
    {
        res++;
    }

    cout << res;

    return 0;
}