#include<bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) 
{
     int Min_price = INT32_MIN;
     int Max = 0;
     for(int i: prices)   
     {
         if(i < Min_price) Min_price = i;
         if(Max < i - Min_price) Max = i - Min_price;
     }
     return Max;
}

int main()
{

}