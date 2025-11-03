// You are given 't' testcases.
// In each testcase, you are given a non-decreasing array of length 'n' and an integer 'x'.
// Your task is to determine if the number is present in the array or not.
// If yes, then find its frequency too.
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

void solve()
{
    int n, x;
    cin >> n >> x;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int l = 0, r = n - 1, mid, leftIdx = -1, rightIdx = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (arr[mid] < x)
            l = mid + 1;
        else if (arr[mid] > x)
            r = mid - 1;
        else
        {
            leftIdx = mid;
            r = mid - 1;
        }
    }
    l = 0, r = n - 1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (arr[mid] < x)
            l = mid + 1;
        else if (arr[mid] > x)
            r = mid - 1;
        else
        {
            rightIdx = mid;
            l = mid + 1;
        }
    }
    if (leftIdx == -1)
        cout << "Not found\n";
    else
        cout << rightIdx - leftIdx + 1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}