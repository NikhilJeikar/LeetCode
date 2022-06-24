#include <iostream>
#include <vector>

using namespace std;

bool IsPossible(int D, int C, int M, const string& Order)
{
    int Pos = 0;
    for(char chr: Order)
    {
        Pos++;
        if(chr == 'D')
        {
            if (D > 0)
            {
                D--;
                C += M;
            }
            else
                return false;
        }
        else
        {
        if (C > 0)
            C--;
        else
            break;
        }
    }
    if(Pos == Order.size())
        return true;
    else
    {
        for(char chr:  Order.substr(Pos))
        {
            if(chr == 'D')
                return false;
        }
    }

    return true;

}
int main()
{
    int T,N,D,C,M;
    string Order;
    cin>>T;
    for(int TestCase = 1;TestCase <= T;TestCase++)
    {
        cin>>N>>D>>C>>M;
        cin>>Order;
        if(IsPossible(D,C,M,Order))
            cout<<"Case #"<<TestCase<<": YES"<<endl;
        else
            cout<<"Case #"<<TestCase<<": "<<"NO"<<endl;
    }
}
