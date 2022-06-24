#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

/*
inline vector<int> Sort(vector<int> Vec)
{
    int min;
    int ind;
    for (int i = 0; i < Vec.size(); i++)
    {
        min = Vec[i];
        ind = i;
        for (int j = i; j < Vec.size(); j++)
        {
            if(min > Vec[j]) 
            {
                min = Vec[j];
                ind = j;  
            }
        }   
        swap(Vec[i],Vec[ind]);
    }
    return Vec;   
}
inline string String(vector<int> Vec)
{
    ostringstream Str;
    copy(Vec.begin(),Vec.end(),ostream_iterator<int>(Str," "));
    return Str.str();
}
vector<vector<int>> threeSum(vector<int> nums) 
{
    unordered_map<int,unordered_set<int>> Hashmap;
    unordered_set<string> Set;
    vector<vector<int>> Vec;
    vector<int> temp;
    for (int i = 0; i < nums.size(); i++)
    {
        if(Hashmap.find(nums[i]) == Hashmap.end())
        {
            unordered_set<int> Index;
            Index.insert(i);
            Hashmap[nums[i]] = Index;
        }
        else
        {
            Hashmap[nums[i]].insert(i);
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {

            if(i != j && Hashmap.find(-(nums[i] + nums[j])) != Hashmap.end() && Hashmap.find(nums[j])->second.size() > 1 )
            {
                temp = Sort({nums[i],nums[j],-(nums[i] + nums[j])});
                if(Set.find(String(temp)) == Set.end())
                {
                    Vec.push_back(temp);
                    Set.insert(String(temp));
                }
            }
        }   

    }
    return Vec;
       
}
*/


vector<vector<int>> threeSum(vector<int> nums ) 
{
sort(nums.begin(),nums.end());
vector<vector<int>> Final;
int l,r,X,Sum;
int Size = nums.size();
for (int i = 0; i < Size; i++)
{
    l =i+1;
    r = Size - 1;
    X = nums[i];
    if(i != 0 && nums[i] == nums[i-1]) continue;
    while (l < r)
    {
    Sum = X + nums[l] + nums[r];
    if(Sum == 0)
    {   
        Final.push_back({X,nums[l],nums[r]});
        while ( l < Size && nums[l] == nums[l+1]) l++;
        while ( r > 0 && nums[r] == nums[r-1]) r--;
        
        r--;
        l++;
    }
    else if(Sum > 0)
    {
        r--;
    }
    else
    {
        l++;
    }
    }
    
}
return Final;
}
int main()
{
vector<vector<int>> Vec = threeSum({34,55,79,28,46,33,2,48,31,-3,84,71,52,-3,93,15,21,-43,57,-6,86,56,94,74,83,-14,28,-66,46,-49,62,-11,43,65,77,12,47,61,26,1,13,29,55,-82,76,26,15,-29,36,-29,10,-70,69,17,49});
for (int i = 0; i < Vec.size(); i++)
{
    for (int j = 0; j < Vec[i].size(); j++)
    {
    cout<<Vec[i][j]<<" ";
    }
    cout<<endl;
}
vector<vector<int>> vec = threeSum({0,0,0});
for (int i = 0; i < vec.size(); i++)
{
    for (int j = 0; j < vec[i].size(); j++)
    {
    cout<<vec[i][j]<<" ";
    }
    cout<<endl;
}
}