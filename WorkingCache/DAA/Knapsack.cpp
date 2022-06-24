#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Data
{
    int Value;
    int Weight;
    Data(int weight,int value)
    {
        Value = value;
        Weight = weight;
    }
};


int Knapsack(vector<Data> Array, unsigned int MaxWeight, unsigned int MaxDepth)
{
    if(MaxDepth == 0 || MaxWeight == 0)
        return 0;
    if(Array[MaxDepth - 1].Weight > MaxWeight)
        return Knapsack(Array,MaxWeight,MaxDepth - 1);
    else
        return max(Knapsack(Array, MaxWeight,MaxDepth - 1),
                   Knapsack(Array,MaxWeight - Array[MaxDepth - 1].Weight,MaxDepth-1) + Array[MaxDepth - 1].Value);
}

int main()
{
    vector<Data> Array = {Data(2,10),Data(3,5),
                          Data(5,15),Data(7,7),
                          Data(1,6),Data(4,18),
                          Data(1,3)};
    int Max = 6;
    cout<<Knapsack(Array,Max,Array.size())<<endl;
}

//WorkingCache/Knapsack.cpp