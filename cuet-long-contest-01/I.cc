#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int dot = 0, n;
        cin >> n;

        int player = -1;
        for (int i = 1; -n <= dot && dot <= n; i++)
        {
            dot = dot + player * (2 * i - 1);

            player = -player;
        }

        if (player == -1)
        {
            cout << "Kosuke\n";
        }
        else
        {
            cout << "Sakurako\n";
        }
    }
    return 0;
}