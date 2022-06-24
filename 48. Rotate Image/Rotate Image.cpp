#include<bits/stdc++.h>

using namespace std;

void rotate(vector<vector<int>>& matrix) 
{
    int Size = matrix.size();
    for (int i = 0; i < Size; i++)
    {
        vector<int> Vec;
        for (int j = 0; j < matrix[0].size(); j++)
        {
            Vec.insert(Vec.begin(),matrix[j][i]);
        }
        matrix.push_back(Vec);
        
    }
    for (int i = 0; i < Size; i++)
    {
        matrix.erase(matrix.begin());
    }
}

int main()
{

}