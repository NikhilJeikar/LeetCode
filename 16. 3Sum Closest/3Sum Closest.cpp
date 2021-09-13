#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;
#define MOD(X) ((X > 0) ? X : -X)

int threeSumClosest(vector<int>& nums, int target) 
{
sort(nums.begin(),nums.end());
int l,r,X,Sum;
int Size = nums.size();
int min = INT32_MAX;
int ret =0 ,Val = 0;
for (int i = 0; i < Size; i++)
{
    l =i+1;
    r = Size - 1;
    X = nums[i];
    if(i != 0 && X == nums[i-1]) continue;
    while (l < r)
    {
    Sum = X + nums[l] + nums[r];
    ret = target - Sum;
    if(MOD(ret) < min)
    {
        min = MOD(ret);
        Val = Sum;
    }
    
    if(Sum > target) r--;
    if(Sum < target) l++;
    if(Sum == target) return target;
    }
}
return Val;
}


vector<vector<int>> threeSum(vector<int> nums ) 
{
sort(nums.begin(),nums.end());
vector<vector<int>> Final;
int l,r,X,Sum;
int Size = nums.size();
for (int i = 0; i < Size; i++)
{
    l =i+1;
    r = Size - 1;
    X = nums[i];
    if(i != 0 && nums[i] == nums[i-1]) continue;
    while (l < r)
    {
    Sum = X + nums[l] + nums[r];
    if(Sum == 0)
    {   
        Final.push_back({X,nums[l],nums[r]});
        while ( l < Size && nums[l] == nums[l+1]) l++;
        while ( r > 0 && nums[r] == nums[r-1]) r--;
        
        r--;
        l++;
    }
    else if(Sum > 0)
    {
        r--;
    }
    else
    {
        l++;
    }
    }
    
}
return Final;
}
int main()
{
    vector<int> Vec = {-1,2,1,-4};
    cout<<threeSumClosest(Vec,1)<<endl;
    vector<int> vec = {1,1,1,0};
    cout<<threeSumClosest(vec,-100)<<endl;
    vector<int> v = {-1,0,1,1,55};
    cout<<threeSumClosest(v,3)<<endl;
}