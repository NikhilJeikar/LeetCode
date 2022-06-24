#include<iostream>
#include<vector>
#include<unordered_map>


using namespace std;

vector<int> findSubstring(string s, vector<string>& words) 
{
int WordsSize = words.size();
int WordSize = words[0].size();
int StringSize = s.size();

vector<int> Final;

unordered_map<string,int> Map;

if(StringSize < WordsSize * WordSize) return Final;
    
for(string Str:words) Map[Str]++;

for(int i = 0; i <= StringSize-WordSize*WordsSize ;i++)
{
    int count = WordsSize;
    int st = i;
    unordered_map<string,int> IMap;
    while (count)
    {
        string Str = s.substr(st,WordSize);
        IMap[Str]++;
        if(Map.find(Str) != Map.end() && Map[Str] >= IMap[Str])
        {
            count--;
            st = st + WordSize;
            continue;
        }
            break;
    }
    if(count == 0)
    {
        Final.push_back(i);
    }
 
}
return Final;
}

int main()
{
    vector<string> Vec = {"fooo","barr","wing","ding","wing"};
findSubstring("lingmindraboofooowingdingbarrwingmonkeypoundcake",Vec);
}