#include<iostream>
#include<stddef.h>

using namespace std;

/*
Using 64 bits signed int variable is used
*/
/*
int reverse(int64_t x) 
{
    int64_t sum = 0;
    int64_t state = 1;

    while (x != 0)
    {
        sum = sum * 10 + (x%10);
        x = x/10;
    }
    if (sum <=INT32_MAX && sum >= INT32_MIN) return sum;
    return 0;
}
*/

/*
checking whether the overflow occurs 
*/

int reverse(int x) 
{
    int sum = 0;

    while (x != 0)
    {
        int Int = x%10;
        if(sum > INT32_MAX/10 || (sum == INT32_MAX/10 && Int > 7)) return 0;
        if(sum < INT32_MIN/10 || (sum == INT32_MIN/10 && Int < -8)) return 0;
        sum = sum * 10 + Int;
        x = x/10;
    }
    return sum;
}
int main()
{
    cout<<"MAX "<<INT32_MAX<<endl;
    cout<<"MIN "<<INT32_MIN<<endl;
    cout<<reverse(123)<<endl;
    cout<<reverse(-123)<<endl;
    cout<<reverse(120)<<endl;
    cout<<reverse(1534236469)<<endl;
}