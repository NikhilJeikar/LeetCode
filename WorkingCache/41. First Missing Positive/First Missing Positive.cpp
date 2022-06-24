#include <iostream>
#include <vector>

using namespace std;


int firstMissingPositive(vector<int>& nums) {
    auto Size = nums.size();
    vector<int> Arr(Size + 1,0);

    for(int i:nums)
        if(i>0 & i <= Size)
            Arr[i]++;
    int i = 1;

    for( i = 1; i<=nums.size(); i++)
        if(!Arr[i]) return i;
    return i;
}
int main()
{
    vector<int> Array = {6,5,4,3,2,6};
    cout<<"Count "<<firstMissingPositive(Array)<<endl;
}