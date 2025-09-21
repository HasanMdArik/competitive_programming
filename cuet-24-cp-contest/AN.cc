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

    if (n % 2 != 0)
    {
        cout << -1;
        return 0;
    }
    else
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }

        for (int i = 1; i < n; i += 2)
        {
            swap(arr[i], arr[i - 1]);
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}