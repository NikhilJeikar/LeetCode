#include<iostream>
#include<string.h>
#include<unordered_map>
#include<vector>
#include<set>

using namespace std;


/*
This is using adding distinct char in between to make the string in odd count and check
*/
/*
string longestPalindrome(string s) 
{
    string S = "*";
    for (int i = 0; i < s.size(); i++)
    {
        S = S + s[i] + '*';
    }
    s = S;
    string final = "";
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if(s[i+j] == s[i-j]) 
            {
                if(2*j + 1 > final.size())
                {
                    final = s.substr(i-j,2*j+1);
                }
            }
            else
            {
                break;  
            }
        }
    }
    string Fin ="";
    for (int i = 0; i < final.size(); i++)
    {
        if(final[i] != '*') Fin = Fin + final[i];
    }
    
    return Fin;
}
*/

string longestPalindrome(string s) {
        int max_length = 1;
        int i = 1, len = s.length();
        int start = 0;
        
        while(i < len)
        {
            int l = i - 1;
            int r = i;
            
            while(l >= 0 && r < len && s[l] == s[r])
            {
                if(max_length < r - l + 1)
                {
                    max_length = r - l + 1;
                    start = l;
                }   
                --l; ++r;
            }
          
            l = i - 1;
            r = i + 1;
         
            while(l >= 0 && r < len && s[l] == s[r])
            {
                if(max_length < r - l + 1)
                {
                    max_length = r - l + 1;
                    start = l;
                }
                
                --l; ++r;
            }         
            ++i;
        }
        
        return s.substr(start, max_length);
    }

int main()
{

cout<< longestPalindrome("babad")<<endl;
cout<< longestPalindrome("cccc")<<endl;
cout<< longestPalindrome("obo")<<endl;

}