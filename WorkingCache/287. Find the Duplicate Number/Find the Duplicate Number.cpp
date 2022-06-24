#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int>& nums)
{
    int Ret = -1;
    for(int i:nums)
    {
        int Cur = abs(i);
        if(nums[Cur] < 0)
        {
            Ret = Cur;
            break;
        }
        nums[Cur] *= -1;
    }
    return Ret;
}

int main()
{
    vector<int> Array = {1,3,4,2,2};
    cout<<"Repeated"<<findDuplicate(Array)<<endl;
}

//"WorkingCache/287. Find the Duplicate Number/Find the Duplicate Number.cpp"