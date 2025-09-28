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

    auto p = vi(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> p[i];
    }

    int parentOf = p[(n - 2)];
    int gen = 1;
    while (parentOf != 1)
    {
        parentOf = p[parentOf - 2];
        gen++;
    }

    cout << gen;
    return 0;
}