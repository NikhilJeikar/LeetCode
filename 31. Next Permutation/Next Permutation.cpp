#include <bits/stdc++.h>

using namespace std;

inline void swap(vector<int> &nums,int i,int j)
{
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

inline void rev(vector<int> &nums,int start) 
{
    int i = start, j = nums.size()-1;
    while (i < j) 
    {
        swap(nums, i, j);
        i++;
        j--;
    }
}

void nextPermutation(vector<int> &nums) 
{
int i = nums.size() - 2;
        while (i >= 0 && nums[i + 1] <= nums[i]) {
            i--;
        }
        if (i >= 0) {
            int j = nums.size() - 1;
            while (nums[j] <= nums[i]) {
                j--;
            }
            swap(nums, i, j);
        }
        rev(nums, i + 1);
}


int main()
{
vector<int> Vec = {3,2,1};
nextPermutation(Vec);
cout<<Vec[0]<<" "<<Vec[1]<<" "<<Vec[2]<<endl;
}