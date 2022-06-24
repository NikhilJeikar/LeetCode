#include <bits/stdc++.h>
using namespace std;

#define all(T) (T).begin(), (T).end()
#define Size(T) (auto)(T).size()
#define Concatenate(T1,T2) (T1) ## (T2)

struct Info
{
    int A,B,D;
    Info(int A, int B,int D)
    {
        this->A = A;
        this->B = B;
        this->D = D;
    }
};

int main()
{
    int BuildingCount,PipeCount;
    cin>>BuildingCount>>PipeCount;

    vector<Info*> Data;

    for(int i = 0; i < PipeCount;i++)
    {
        int A,B,D;
        cin>>A>>B>>D;
        Data.push_back(new Info(A,B,D));
    }

    return 0;
}