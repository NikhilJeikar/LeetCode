#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        int Ol = 0;
        int Or = nums.size()   - 1;
        int Il = Ol + 1;
        int Ir = Or - 1;
        int sum = 0;
        bool state = true;
        vector<vector<int>> Vec;
        set<vector<int>> Set;
        sort(nums.begin(),nums.end());
        for(int Elem:nums) cout<<Elem<<" ";
        cout<<endl;
        if(nums.size() > 3)
        {
            while (Or>Ol)
            {
                while (Ol < Or)
                {
                while (Il < Ir)
                {
                    sum = nums[Ol] + nums[Il] +nums[Or] + nums[Ir];
                    //cout<<nums[Ol] <<" "<< nums[Il] <<" "<< nums[Ir] <<" "<< nums[Or]<<endl;
                    if(sum == target)
                    {
                        if(Set.find({nums[Ol] , nums[Il] ,nums[Ir] , nums[Or]}) == Set.end())
                        {
                        Vec.push_back({nums[Ol] , nums[Il] ,nums[Ir] , nums[Or]});
                        Set.insert({nums[Ol] , nums[Il] ,nums[Ir] , nums[Or]});
                        }
                        Ir--;
                        Il++;
                    }
                    else if(sum<target) Il++;
                    else Ir--;
                }
                Il = Ol + 1;
                Or--;
                Ir = Or - 1;
                }
                Ol++;
                Or = nums.size()   - 1;
                Il = Ol +1;
                Ir = Or - 1;
            }
            

        return Vec;   
        }
        else return {};
    }
int main()
{
    vector<int> V = {-3,-1,0,2,4,5};
    for(vector<int> Vec: fourSum(V,0))
    {
        for(int Elem:Vec)
        {
            cout<<Elem<<" ";
        }
        cout<<endl;
    }
       vector<int> v = {-3,-2,-1,0,0,1,2,3};
    for(vector<int> Vec: fourSum(v,0))
    {
        for(int Elem:Vec)
        {
            cout<<Elem<<" ";
        }
        cout<<endl;
    }
}