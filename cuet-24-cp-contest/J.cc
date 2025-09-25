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
    string s;
    cin >> s;

    int startIdx = 0;
    int cmd, x;
    while (q--)
    {
        cin >> cmd >> x;

        if (cmd == 2)
        {
            cout << s[(startIdx + x - 1) % n] << endl;
        }
        else
        {
            if (startIdx < x)
            {
                startIdx = n + startIdx - x;
            }
            else
            {
                startIdx -= x;
            }
        }
    }

    return 0;
}