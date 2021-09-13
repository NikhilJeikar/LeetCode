#include<bits/stdc++.h>

using namespace std;

    vector<vector<int>> permuteUnique(vector<int>&nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> Set;
        vector<vector<int>> Out;
        do
        {
            Set.insert(nums);
        }while(next_permutation(nums.begin(),nums.end()));
        vector<vector<int>> Vec(Set.begin(),Set.end());
        return Vec;        
    }

int main()
{

}
