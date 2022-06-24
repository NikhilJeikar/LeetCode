#include<iostream>

using namespace std;

bool isPalindrome(int x) 
{
int64_t sum = 0;
int64_t X = x;
int64_t Elem = x % 10;
while (x != 0)
{
    x = x /10;
    sum = sum*10 + Elem;
    Elem = x % 10;
}

if(sum == X && X >= 0) return true;
return false;

}

int main()
{

cout<<isPalindrome(121)<<endl;
cout<<isPalindrome(-121)<<endl;
cout<<isPalindrome(10)<<endl;
cout<<isPalindrome(-101)<<endl;

}