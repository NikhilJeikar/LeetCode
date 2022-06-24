#include<iostream>

using namespace std;

int strStr(string haystack, string needle) 
{
    if(needle == "") return 0;
    int NSize = needle.size();
    int HSize = haystack.size();
    for(int i = 0; i < HSize - NSize + 1;i++)        
    {
        if(needle == haystack.substr(i,NSize)) return i;
    }
    return -1;
}
int main()
{
cout<<strStr("hello","ll")<<endl;
cout<<strStr("aaaaa","bba")<<endl;
cout<<strStr("","")<<endl;
cout<<strStr("abb","abaaa")<<endl;
cout<<strStr("aaa","aaaa")<<endl;
cout<<strStr("mississippi","issip")<<endl;
}