#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &m)
{
    for (int i = 0; i < m.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(m[i][j], m[j][i]);
        }
    }

    for (int i = 0; i < m.size(); i++)
    {
        reverse(m[i].begin(), m[i].end());
    }
}