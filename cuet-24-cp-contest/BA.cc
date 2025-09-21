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

    int n, x;
    cin >> n >> x;

    long long iceCreams = x;

    char sign;
    int d, distressedKid = 0;
    while (n--)
    {
        cin >> sign >> d;
        if (sign == '+')
        {
            iceCreams += d;
        }
        else
        {
            if (d > iceCreams)
                distressedKid++;
            else
                iceCreams -= d;
        }
    }

    cout << iceCreams << " " << distressedKid;

    return 0;
}