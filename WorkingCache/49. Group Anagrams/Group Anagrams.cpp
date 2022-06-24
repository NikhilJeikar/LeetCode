#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs)
{
    auto Size = strs.size();
    vector<string> CStrs = strs;
    unordered_map<string,vector<string>> Map;

    for(int i = 0;i < Size;i++)
    {
        sort(CStrs[i].begin(), CStrs[i].end());
        if(Map.find(CStrs[i]) == Map.end())
            Map[CStrs[i]] = {strs[i]};
        else
            Map[CStrs[i]].push_back(strs[i]);

    }
    vector<vector<string>> Out;
    for(auto i: Map)
    {
        Out.push_back(i.second);
    }
    return Out;
}

int main()
{
    vector<string> Array = {"eat","tea","tan","ate","nat","bat"};
    groupAnagrams(Array);
}