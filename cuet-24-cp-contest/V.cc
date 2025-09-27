#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

string printNthSequence(int n)
{
    if (n == 1)
        return "1";

    string prevSequence = printNthSequence(n - 1);
    string res = prevSequence;
    string nStr = to_string(n);
    res.push_back(' ');
    if (n < 10)
        res.push_back(nStr[0]);
    else
    {
        res.push_back(nStr[0]);
        res.push_back(nStr[1]);
    }
    res.push_back(' ');
    for (int i = 0; i < prevSequence.length(); i++)
    {
        res.push_back(prevSequence[i]);
    }

    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << printNthSequence(n);

    return 0;
}