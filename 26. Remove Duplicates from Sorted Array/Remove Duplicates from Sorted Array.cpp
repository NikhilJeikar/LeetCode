#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int removeDuplicates(vector<int>& nums) 
{     
    int Size = nums.size();
    int Pointer1 = 0,Pointer2 = 1;
    if(Size == 0|| Size==1)
    {
        return Size;
    }
    else
    {
        while (Pointer2 < Size)
        {
            if(nums[Pointer2] != nums[Pointer1])
            {
                Pointer1++;
                swap(nums[Pointer1],nums[Pointer2]);
                Pointer2++;
            }
            else
            {
                Pointer2++;
            }
        }
    }
    
    return Pointer1 + 1;
}
int main()
{
vector<int> V = {1,1,2};
cout<<removeDuplicates(V)<<endl;
}