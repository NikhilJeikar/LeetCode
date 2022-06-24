#include<bits/stdc++.h>

using namespace std;


vector<int> plusOne(vector<int>& digits) 
{
    int num = 0;
    for(int i = digits.size() - 1;i>=0;i--)
    {
        if (digits[i] == 9)
        {
            digits[i] = 0;
            continue;
        }
        digits[i] = digits[i] + 1;      
        break;
    }
    if(digits[0] == 0) digits.insert(digits.begin(),1);
    return digits;
}

int main()
{
vector<int> a = {4,3,2,1};
for(int i:plusOne(a))cout<<i<<" ";
cout<<endl;
}