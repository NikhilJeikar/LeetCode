#include <bits/stdc++.h>
using namespace std;

#define all(T) (T).begin(), (T).end()
#define Size(T) (auto)(T).size()
#define Concatenate(T1,T2) (T1) ## (T2)
#define Range(i)
#define in :

int Calc(const vector<vector<int>>&Space)
{
    vector<vector<int>>Health;
    for(auto & i : Space)
    {
        vector<int> Temp;
        for(int j = 1;j < i.size();j++)
            Temp.push_back(0);
        Health.push_back(Temp);
    }
    
    for(const auto& i in Space)
    {
        for (auto j : i)
            cout<<j<<" ";
        cout<<endl;
    }
}

int main()
{
    int M, N;
    cin >>M;
    cin >>N;
    vector<vector<int>> Space;

    for (int i = 0;i < M;i++)
    {
        vector<int> Temp;
        for(int j = 0;j < N;j++)
        {
            int var;
            cin>>var;
            Temp.push_back(var);
        }
        Space.push_back(Temp);
    }
    cout<<Calc(Space);
    return 0;
}

/*
 3
 3
 -2 -3 3
 -5 -10 1
 10 30 -5

 */