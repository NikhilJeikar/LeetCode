#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int searchInsert(vector<int>& nums, int target) 
{
    int Size = nums.size();
    if(Size == 0) return 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i] >= target )return i;
    }
    return Size;  
}

int main()
{

}