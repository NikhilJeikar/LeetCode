#include<iostream>

using namespace std;


int divide(int dividend, int divisor)
 {
    if(dividend == INT32_MIN && divisor == -1) return INT32_MAX;
     return int(dividend/divisor);
}

int main()
{
cout<<divide(10,3)<<endl;
}