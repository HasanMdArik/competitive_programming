#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

bool doesArraySatisfies(int arr[])
{
    return arr[0] >= 3 && arr[1] >= 1 && arr[2] >= 2 && arr[3] >= 1 && arr[5] >= 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[10] = {0};

        int breakpoint = -1, ai;
        for (int i = 1; i <= n; i++)
        {
            cin >> ai;
            arr[ai]++;
            if (doesArraySatisfies(arr) && breakpoint == -1)
                breakpoint = i;
        }

        if (doesArraySatisfies(arr))
            cout << breakpoint << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}