#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int singleNumber(vector<int>& nums)
{
    int Val = 0;
    for(int i: nums)
    {
        Val = Val^i;
    }
    return Val;
}

int main()
{
    vector<int> Array = {4,1,2,1,2};
    cout<<"Missing"<<singleNumber(Array)<<endl;
}

//"WorkingCache/136. Single Number/Single Number.cpp"