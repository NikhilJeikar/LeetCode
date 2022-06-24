#include<iostream>

using namespace std;

int romanToInt(string s) 
{
int Prev = 0;
int Val = 0;    
int Sum = 0;
for (int i = 0; i < s.size(); i++)
{
    if(s[i] == 'I')
    {
        Val = 1;
    }
    else if(s[i] == 'V')
    {
        Val = 5;
    }
    else if(s[i] == 'X')
    {
        Val = 10;
    }
    else if(s[i] == 'L')
    {
        Val = 50;
    }
    else if(s[i] == 'C')
    {
        Val = 100;
    }
    else if(s[i] == 'D')
    {
        Val = 500;
    }
    else if(s[i] == 'M')
    {
        Val = 1000;
    }

    if(Prev < Val)
    {
        Sum = Sum + Val - 2*Prev;
    }
    else
    {
        Sum = Sum + Val;
    }
    Prev = Val;
}
return Sum;
}

int main()
{
cout<<romanToInt("III")<<endl;
cout<<romanToInt("IV")<<endl;
cout<<romanToInt("IX")<<endl;
cout<<romanToInt("LVIII")<<endl;
cout<<romanToInt("MCMXCIV")<<endl;
}