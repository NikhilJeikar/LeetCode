#include<bits/stdc++.h>

using namespace std;

inline void rotate(vector<vector<int>>& matrix,int Size) 
{
    for (int i = 0; i < Size; i++)
    {
        vector<int> Vec;
        for (int j = 0; j < Size; j++)
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
inline bool IsValid(vector<vector<int>>& mat, vector<vector<int>>& target,int Size)
{
    for (int i = 0; i < Size; i++)
    {
        for (int j = 0; j < Size; j++)
        {
            if(target[i][j] != mat[i][j]) return false;
        }        
    }
    return true;
}
bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) 
{
    int Size = mat.size();

    if(IsValid(mat,target,Size)) return true;
    rotate(mat,Size);
    
    if(IsValid(mat,target,Size)) return true;
    rotate(mat,Size);

    if(IsValid(mat,target,Size)) return true;
    rotate(mat,Size);
    
    if(IsValid(mat,target,Size)) return true;
    
    return false;
}

int main()
{

}