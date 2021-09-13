#include<bits/stdc++.h>

using namespace std;

double myPow(double x, int n) 
{
    long int N = n;
    if(N == 0)
        return 1;
    
    if(N < 0)
    {
        x = 1 / x;
        N = -N;
    }
    
    if(N == 1)
        return x;
    
    if(N % 2 == 0)
    {
        double temp = myPow(x, N / 2);
        return temp * temp;
    }
    
    double temp = myPow(x, N - 1);
    return x * temp;
}

int main()
{

}