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

    int a, b, n;

    cin >> a >> b >> n;

    bool isSimonPlaying = true;

    while (n > 0)
    {
        if (isSimonPlaying)
        {
            n -= gcd(a, n);
        }
        else
        {
            n -= gcd(b, n);
        }
        isSimonPlaying = !isSimonPlaying;
    }

    if (isSimonPlaying)
        cout << 1;
    else
        cout << 0;

    return 0;
}