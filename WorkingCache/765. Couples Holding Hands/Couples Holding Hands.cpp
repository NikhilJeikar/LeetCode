#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

struct Pair
{
    int Min,Max,Sum;
    Pair(int a,int b)
    {
        if(a > b)
        {
            Max = a;
            Min = b;
        }
        else
        {
            Max = b;
            Min = a;
        }
        Sum = Min + Max;
    }
};


int minSwapsCouples(vector<int> &row)
{
    int swaps = 0;
    unsigned int Size = row.size();
    unordered_set<Pair,> Set;
    vector<Pair> PairVector;
    for(int i = 0;i < Size;i = i + 2)
    {
        struct Pair elem(row[i],row[i + 1]);
        PairVector.push_back(elem);
    }
    for(Pair pair:PairVector)
    {
        if
    }
    return swaps;
}

int main()
{
    vector<int> Vec = {0,2,1,3};
    cout<<"Swaps "<< minSwapsCouples(Vec)<<endl;
}

//"WorkingCache/765. Couples Holding Hands/Couples Holding Hands.cpp"