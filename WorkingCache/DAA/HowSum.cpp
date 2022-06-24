#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int Impossible = -200;


vector<int> HowSum(const vector<int>& Array,int sum)
{
    if(sum == 0)
        return {};
    for(int i:Array)
    {
        if(i <= sum)
        {
            vector<int> Vec = HowSum(Array,sum - i);
            if(Vec.empty() || (!Vec.empty() && Vec[0] != Impossible))
            {
                Vec.push_back(i);
                return Vec;
            }
        }
    }
    return {Impossible};
}


int main()
{
    vector<int> Array = {500,100,50,20,10,5,2,1};
    int Sum = 93;
    sort(Array.begin(),Array.end(),greater<int>());
    for(int i:HowSum(Array,Sum))
        cout<<i<<", ";
    cout<<endl;

}
//WorkingCache/HowSum.cpp