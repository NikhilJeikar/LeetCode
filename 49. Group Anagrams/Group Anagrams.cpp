vector<vector<string>> groupAnagrams(vector<string>& strs)
{
    auto Size = strs.size();
    vector<string> Cstrs = strs;
    unordered_map<string,vector<string>> Map;
    
    for(int i = 0;i < Size;i++)
    {
        sort(Cstrs[i].begin(),Cstrs[i].end());
        if(Map.find(Cstrs[i]) == Map.end())
        {
            Map[Cstrs[i]] = {strs[i]};
        } else
        {
            Map[Cstrs[i]].push_back(strs[i]);
        }
    }
    vector<vector<string>> Out;
    for(auto i: Map)
    {
        Out.push_back(i.second);
    }
    return Out;
}