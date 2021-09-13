#include <iostream>
#include <vector>
#include <stdbool.h>

using namespace std;

string convert(string s, int numRows) 
{
    if(numRows == 1) return s;

    vector<string> Rows(min(numRows,int (s.size())));
    int count = 0;
    bool State = false;

    for(char Char:s)
    {
        Rows[count] = Rows[count] + Char;
        if(count == 0 || count == numRows - 1) State = !State;
        count += (State?1:-1);
    }
    string ret;
    for(string Str:Rows) ret = ret + Str;
    return ret;
}
int main()
{
    cout<<convert("PAYPALISHIRING",4)<<endl;
    cout<<convert("PAYPALISHIRING",3)<<endl;
    cout<<convert("ABC",3)<<endl;
    cout<<convert("AB",1)<<endl;
    cout<<convert("A",2)<<endl;
}