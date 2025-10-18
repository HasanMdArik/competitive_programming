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

    int k, n, m;
    cin >> k >> n >> m;

    int num;
    multiset<int> negQG, nonNegQG, negQC, nonNegQC;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num < 0)
        {
            negQG.insert(num);
        }
        else
        {
            nonNegQG.insert(num);
        }
    }

    for (int i = 0; i < m; i++)
    {
        cin >> num;
        if (num < 0)
        {
            negQC.insert(num);
        }
        else
        {
            nonNegQC.insert(num);
        }
    }

    long long sum = 0;
    while (k--)
    {
        std::multiset<int>::iterator minNegQG = negQG.begin(), minNegQC = negQC.begin();
        std::multiset<int>::reverse_iterator maxNNegQG = nonNegQG.rbegin(), maxNNegQC = nonNegQC.rbegin();
        if (minNegQG != negQG.end() && minNegQC != negQC.end() && maxNNegQC != nonNegQC.rend() && maxNNegQG != nonNegQG.rend())
        {
            int negRes = *minNegQC * *minNegQG;
            int nnegRes = *maxNNegQC * *maxNNegQG;

            if (negRes > nnegRes)
            {
                sum += negRes;
                negQC.erase(minNegQC);
                negQG.erase(minNegQG);
            }
            else
            {
                sum += nnegRes;
                nonNegQC.erase(prev(maxNNegQC.base()));
                nonNegQG.erase(prev(maxNNegQG.base()));
            }
        }
        else if ((minNegQG == negQG.end() || minNegQC == negQC.end()) && maxNNegQC != nonNegQC.rend() && maxNNegQG != nonNegQG.rend())
        {
            int nnegRes = *maxNNegQC * *maxNNegQG;
            sum += nnegRes;
            nonNegQC.erase(prev(maxNNegQC.base()));
            nonNegQG.erase(prev(maxNNegQG.base()));
        }
        else if (minNegQG != negQG.end() && minNegQC != negQC.end() && (maxNNegQC == nonNegQC.rend() || maxNNegQG == nonNegQG.rend()))
        {
            int negRes = *minNegQC * *minNegQG;
            sum += negRes;
            negQC.erase(minNegQC);
            negQG.erase(minNegQG);
        }
        else
        {
            auto maxNegQC = negQC.rbegin(), maxNegQG = negQG.rbegin();
            auto minNNegQC = nonNegQC.begin(), minNNegQG = nonNegQG.begin();

            if (maxNegQC != negQC.rend())
            {
                sum += (*maxNegQC * *minNNegQG);
                negQC.erase(prev(maxNegQC.base()));
                nonNegQG.erase(minNNegQG);
            }
            else
            {
                sum += (*maxNegQG * *minNNegQC);
                negQG.erase(prev(maxNegQG.base()));
                nonNegQC.erase(minNNegQC);
            }
        }
    }

    cout << sum;

    return 0;
}