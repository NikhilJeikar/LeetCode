#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<string> generateParenthesis(int n) 
{
vector<string> Final,Fin = {"()"};
unordered_set<string> Ref;
string Str = "";
for (int i = 1; i < n; i++)
{
    for (int j = 0; j < Fin.size(); j++)
    {
        for (int k = 0; k < Fin[j].size(); k++)
        {
            Str = Fin[j].substr(0,k) + "()" + Fin[j].substr(k);
            if(Ref.find(Str) == Ref.end())
            {
                Ref.insert(Str);
                Final.push_back(Str);
            }
        }
    }
    Fin = Final;
    Final = {};
}
return Fin;
}

int main()
{
vector<string> Str = generateParenthesis(3);
for (string S:Str)
{
    cout<<S<<endl;
}

}