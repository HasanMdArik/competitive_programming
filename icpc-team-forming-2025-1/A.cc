#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vi vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int pos = 0;
    map<int, bool> gotThere;
    gotThere[-1] = true;
    gotThere[0] = true;
    cout << vec[pos] << " ";
    n--;
    int distFromN = n - pos;
    while (distFromN != 0)
    {
        // cout << "pos: " << pos << " distFromN:" << distFromN << endl;
        if (!gotThere[pos - 1])
        {
            cout << vec[--pos] << " ";
        }
        else
        {
            if ((distFromN == 2 && !gotThere[pos + 1]) || distFromN == 1)
            {
                cout << vec[++pos] << " ";
            }
            else if (distFromN > 1 && (vec[pos + 2] >= vec[pos + 1] && !gotThere[pos + 1]))
            {
                pos += 1;
                cout << vec[pos] << " ";
            }
            else
            {
                pos += 2;
                cout << vec[pos] << " ";
            }
        }

        gotThere[pos] = true;
        distFromN = n - pos;
    }

    cout << endl;
    //<< "---" << endl;
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