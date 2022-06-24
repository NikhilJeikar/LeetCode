#include<bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    int Ret = 1;
    for (int i = 1; i <= n; i++) Ret *=i; 
    
    return Ret;
}
vector<vector<int>> permute(vector<int>& nums) 
{
int Possiblity = factorial(nums.size());
vector<vector<int>> Out;
for(;Possiblity > 0;Possiblity--)
{
    next_permutation(nums.begin(),nums.end());
    Out.push_back(nums);
}
return Out;
}

int main()
{

}