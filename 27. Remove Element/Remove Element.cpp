#include<iostream>
#include<vector>

using namespace std;

int removeElement(vector<int>& nums, int val) 
{
    vector<int>::const_iterator Start = nums.begin();
    int Size = nums.size();
    for (int i = 0; i < Size; i++)
    {
        if(nums[i] == val)
        {
            nums.erase(Start + i--);
            Size--;
        }
    }
    return nums.size();
}
int main()
{
vector<int> Vec = {3,2,2,3};
cout<<removeElement(Vec,3)<<endl;
}