#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

// Given a sorted array of length n and an integer b find the index of b. If not found print -1
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, b;
    cin >> n >> b;
    int vec[n];
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    int l = 0, r = n - 1, mid, res = -2;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (vec[mid] > b)
            r = mid - 1;
        else if (vec[mid] < b)
            l = mid + 1;
        else
        {
            res = mid;
            break;
        }
    }

    cout << res + 1 << endl;

    return 0;
}