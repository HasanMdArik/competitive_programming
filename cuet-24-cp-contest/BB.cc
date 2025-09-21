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

    auto idxPositionOfNum = map<int, vector<int>>();
    int sum = 0;
    int cardNum;
    for (int i = 0; i < n; i++)
    {
        cin >> cardNum;
        if (idxPositionOfNum.find(cardNum) != idxPositionOfNum.end())
        {
            idxPositionOfNum[cardNum].push_back(i + 1);
        }
        else
        {
            idxPositionOfNum[cardNum] = {i + 1};
        }
        sum += cardNum;
    }

    int reqPairSum = sum * 2 / n;

    for (auto i = idxPositionOfNum.begin(); i != idxPositionOfNum.end(); i++)
    {
        for (int j = 0; j < i->second.size(); j++)
        {

            auto &complementaryCardIdxs = idxPositionOfNum[(reqPairSum - i->first)];
            if (i->second[j] != -1)
            {
                cout << i->second[j] << " " << complementaryCardIdxs[complementaryCardIdxs.size() - 1 - j] << endl;
                complementaryCardIdxs[complementaryCardIdxs.size() - 1 - j] = -1;
            }
        }
    }

    return 0;
}