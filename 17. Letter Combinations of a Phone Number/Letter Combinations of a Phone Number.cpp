#include<iostream>
#include<vector>

using namespace std;

vector<string> letterCombinations(string digits)
{
vector<string> _2 = {"a","b","c"};
vector<string> _3 = {"d","e","f"};
vector<string> _4 = {"g","h","i"};
vector<string> _5 = {"j","k","l"};
vector<string> _6 = {"m","n","o"};
vector<string> _7 = {"p","q","r","s"};
vector<string> _8 = {"t","u","v"};
vector<string> _9 = {"w","x","y","z"};
vector<string> *Arr;
vector<string> Final,Fin;

for (int i = 0; i < digits.size(); i++)
{
    if(digits[i] == '2') Arr = &_2;
    if(digits[i] == '3') Arr = &_3;
    if(digits[i] == '4') Arr = &_4;
    if(digits[i] == '5') Arr = &_5;
    if(digits[i] == '6') Arr = &_6;
    if(digits[i] == '7') Arr = &_7;
    if(digits[i] == '8') Arr = &_8;
    if(digits[i] == '9') Arr = &_9;
    
    if(Final.size() == 0)
    {
        Final = *Arr; 
        continue;       
    }
    else
    {
    for (int i = 0; i < Final.size(); i++)
    {
        for (int j = 0; j < Arr->size(); j++)
        {
            Fin.push_back(Final[i] + Arr->at(j));
        }            
    }
    Final = Fin;
    if(i != digits.size() - 1) Fin = {};
    }
}
return Final;
}
int main()
{
vector<string> Ret = letterCombinations("234");
for (string Elem:Ret)
{
    cout<<Elem<<" ";
}
cout<<endl;
}