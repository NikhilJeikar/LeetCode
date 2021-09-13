#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>

using namespace std;

vector<int> findSubstring(string s, vector<string>& words) 
{
int WordsSize = words.size();
int WordSize = words[0].size();
int StringSize = s.size();

vector<int> Final;

unordered_map<string,int> Map;

for(string Str:words) Map[Str]++;

for(int i = 0; i < StringSize-WordSize + 1 ;i++)
{
    int count = WordsSize;
    int st = i;
    unordered_map<string,int> IMap;
    while (count)
    {
        string Str = s.substr(st,WordSize);
        IMap[Str]++;
        if(Map.find(Str) != Map.end() && Map.find(Str)->second >= IMap.find(Str)->second)
        {
            count--;
            st = st + WordSize;
        }
        else
        {
            break;
        }
        if(!count)Final.push_back(i);
    }
 
}
return Final;
}

int main()
{
    vector<string> Vec = {"fooo","barr","wing","ding","wing"};
findSubstring("lingmindraboofooowingdingbarrwingmonkeypoundcake",Vec);
}