#include <iostream>
#include <vector>


using namespace std;

int missingNumber(vector<int>& nums)
{
    unsigned int n = nums.size();
    int sum = 0;
    for(int i:nums)
        sum += i;
    return n*(n+1)/2 - sum;
}

int main()
{
    vector<int> Array = {6,5,4,3,2,6};
    cout<<"Missing"<<missingNumber(Array)<<endl;
}