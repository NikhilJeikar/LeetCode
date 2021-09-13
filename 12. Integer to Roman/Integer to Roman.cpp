#include<iostream>

using namespace std;

inline  int Divide(int *Num,int Div)
{
    int ret = 0;
    if (*Num >= Div)
    {
        ret = (*Num)/Div;
        *Num = (*Num)%Div;
    }
    return ret;
}

inline string gen(int num,string Prev , string Char,string Next)
{
if(num == 0) return "";
if(num == 1) return Prev;
if(num == 2) return Prev+Prev;
if(num == 3) return Prev+Prev+Prev;
if(num == 4) return Prev+Char;
if(num == 5) return Char;
if(num == 6) return Char + Prev;
if(num == 7) return Char + Prev + Prev;
if(num == 8) return Char + Prev + Prev + Prev;
if(num == 9) return Prev + Next;
return " ";
}
string intToRoman(int num) 
{
    string M = gen(Divide(&num,1000),"M"," "," ");
    string C = gen(Divide(&num,100),"C","D","M");
    string X = gen(Divide(&num,10),"X","L","C");
    string I = gen(num,"I","V","X") ;
    return M + C + X + I;
}

int main()
{
cout<<intToRoman(9)<<endl;
cout<<intToRoman(3)<<endl;
cout<<intToRoman(4)<<endl;
cout<<intToRoman(58)<<endl;
cout<<intToRoman(10)<<endl;
cout<<intToRoman(1994)<<endl;
}