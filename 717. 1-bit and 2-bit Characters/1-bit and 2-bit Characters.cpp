#include<iostream>
#include<vector>

using namespace std;
bool isOneBitCharacter(vector<int>& bits) 
{
    bool State = false;
     for(int i = 0;i < bits.size();i++)   
     {
         if(bits[i] == 0) State = true;
         if(i+1 < bits.size() && bits[i] == 1 )
         {
            State = false;
            i++;
         } 
     }
     return State;
}    
int main()
{
vector<int> Vec = {1,0,0};
cout<<isOneBitCharacter(Vec);
}