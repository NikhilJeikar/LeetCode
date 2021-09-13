#include<iostream>
#include <sstream>

using namespace std;

bool Avail;
bool Terminate;
int Multi;

/*
This checks whether the given charecter is a integer or sign( + or -) or space
*/
inline bool IsInt(int ASCII)
{
if((ASCII > 47 && ASCII < 58)||ASCII == 45 ||ASCII == 43 || ASCII == 32) return true;
return false;
}

/*
This returns and set the signs and values. This also take care of the termination once found
*/

inline int Val(int Char)
{
    if(Char == 32||Char == 43||Char == 45)
    {
        if(Avail)
        {
            Terminate = true;
        }
        else
        {
            if(Char == 45)
            {
                Multi = -1;
            }
            if(Char == 45||Char == 43)
            {
                Avail = true;                
            }
        }
        return -1;
    }
    else
    {
        Avail = true;
        return Char - 48;   
    }
}

/*
This ensures the given number is in range and returns the final value with sign
*/
int myAtoi(string s) 
{
    Avail = false;
    Terminate = false;
    Multi = 1;

    int64_t Final = 0;
    for(int i = 0; i<s.length();i++)       
    {
        if(Terminate) break;
        if(IsInt(s[i]))
        {
                int Num = Val(s[i]);
                if(Num >= 0)
                {
                    if(Final*Multi > INT32_MAX/10 || (Final*Multi == INT32_MAX/10 && Num > 7)) return INT32_MAX;
                    if(Final*Multi < INT32_MIN/10 || (Final*Multi == INT32_MIN/10 && Num > 8)) return INT32_MIN;
                    Final = Final*10 + Num;
                }
        }
        else
        {
            break;
        }
    }
     return Final * Multi;
}

int main()
{
cout<<"Output: "<<myAtoi("42")<<endl;
cout<<"Output: "<<myAtoi("-42")<<endl;
cout<<"Output: "<<myAtoi("4193")<<endl;
cout<<"Output: "<<myAtoi("words and 987")<<endl;
cout<<"Output: "<<myAtoi("-91283472332")<<endl;
cout<<"Output: "<<myAtoi("+-12")<<endl;
cout<<"Output: "<<myAtoi("   +0 123")<<endl;
cout<<"Output: "<<myAtoi("   -42")<<endl;
cout<<"Output: "<<myAtoi("-2147483648")<<endl;
cout<<"Output: "<<myAtoi("-2147483647")<<endl;
cout<<"Output: "<<myAtoi("-2147483649")<<endl;
}