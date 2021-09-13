#include<iostream>
#include<vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs) 
{
    int Max = INT32_MAX;
    int Ind = -1;
    for (int i = 0; i < strs.size(); i++)
    {
        if(Max > strs[i].size())
        {
            Max = strs[i].size();
            Ind = i;
        }
    }
    string Final = "";
    for (int j = 0; j < Max; j++)
    {
        bool flag = true;
        for (int i = 0; i < strs.size(); i++)
        {
            if(strs[i][j] != strs[Ind][j])
            {
                flag = false;
            }
        }
        if(!flag)
        {
            return Final;
        }
        else
        {
            Final = Final + strs[Ind][j];
        }
        
    }
    
    return Final;
}
int main()
{
    vector<string> List;
    List.push_back("dog");
    List.push_back("racecar");
    List.push_back("car");
    cout<<longestCommonPrefix(List)<<endl;

}