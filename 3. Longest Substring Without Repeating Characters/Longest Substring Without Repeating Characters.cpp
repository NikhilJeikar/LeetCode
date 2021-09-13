#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;
/*
BruteForce
This use o(n^2) complexity 
*/

/*
int lengthOfLongestSubstring(string s) 
{
    int Length = s.length();
    int start = 0;
    int exit = 1;
    int count = 0;
    int max = 0;
    if(Length == 0)
    {
        return max;
    }
    while (exit == 1)
    {
        unordered_map<char,int> HashMap;
        count = 0;
        for(int i = start ; i<Length;i++)
        {
            char CHR = s[i];
            if(i == Length - 1)
            {
                exit = 0;
            }
            if(HashMap.find(CHR) != HashMap.end())
            {
                start = start + 1;
                break;
            }
            HashMap[CHR] = i;
            count++;
        }           
        if(count > max)
        {
            max = count;
        }    
    }

    return max;
}
*/

/*
This Sliding Window and o(N) complexity
*/
int lengthOfLongestSubstring(string s) 
{
    unordered_map<char,int> HashMap;
    int Legnth = s.length();
    int j = 0;
    int Max = 0;
    unordered_map<char,int>::const_iterator End = HashMap.end();
    for (int i = 0; i < Legnth; i++)
    {
        unordered_map<char,int>::const_iterator Found = HashMap.find(s[i]);
        
        if(Found != End)
        {
            j = max(Found->second,j);
        }
        Max = max(Max,i - j+1);
        HashMap[s[i]] = i + 1;
    }
    return Max;
}

int main()
{
    string str= "abcabcbb";
    cout<<lengthOfLongestSubstring(str)<<endl;
    return 0;
}