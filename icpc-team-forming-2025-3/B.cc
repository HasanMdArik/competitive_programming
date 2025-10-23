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

    int posBitCount[30] = {0}, num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;

        for (int i = 0; i < 30; i++)
        {
            posBitCount[i] += num & 1;
            num >>= 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int num = 0;
        for (int i = 0; i < 30; i++)
        {
            if (posBitCount[i] > 0)
            {
                num += pow(2, i);
                posBitCount[i]--;
            }
        }
        cout << num << ' ';
    }

    return 0;
}