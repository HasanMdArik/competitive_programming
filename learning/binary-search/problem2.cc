// Given an array of 'n' integers.
// Answer 'q' queries.
// In each query you will be given two integer 'l' and 'r' (l <= r).
// For each query you need find the number of elements in the array such that ( l <= arr[i] <= r)

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

    int n, q;
    cin >> n >> q;

    vi arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        int left = 0, right = n - 1, mid, leftIdx = -1, rightIdx;
        // Have to find the leftmost true of the function, l <= arr[i]
        while (left <= right)
        {
            mid = (left + right) / 2;

            if (arr[mid] < l)
                left = mid + 1;
            else
            {
                leftIdx = mid;
                right = mid - 1;
            }
        }

        // Have to find the rightmost true of the function, arr[i] <= r
        left = 0, right = n - 1;
        while (left <= right)
        {
            mid = (left + right) / 2;

            if (arr[mid] > r)
                right = mid - 1;
            else
            {
                rightIdx = mid;
                left = mid + 1;
            }
        }

        if (leftIdx == -1)
            cout << 0 << endl;
        else
            cout << rightIdx - leftIdx + 1 << endl;
    }

    return 0;
}