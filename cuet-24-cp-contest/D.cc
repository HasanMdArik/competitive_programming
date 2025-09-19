#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    bool isThere[n] = {false};

    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        num--;
        if (isThere[num])
        {
            cout << "No";
            return 0;
        }
        else
        {
            isThere[num] = true;
        }
    }
    cout << "Yes";

    return 0;
}