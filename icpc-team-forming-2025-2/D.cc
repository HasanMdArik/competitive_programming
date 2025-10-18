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

    string s;
    cin >> s;

    int opening = 0, closing = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            opening++;
        else
            closing++;
    }

    if (opening != closing)
    {
        cout << "NO";
    }
    else
    {
        int weight = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                weight++;
            else
                weight--;

            if (weight < 0)
            {
                break;
            }
        }
        if (weight == 0)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}