#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target);
int main()
{
//Driver Code
vector<int> Numbers;

Numbers.push_back(3);
Numbers.push_back(2);
Numbers.push_back(4);

int target = 6;
vector<int> out = twoSum(Numbers,target);
return 0;
}

/*
This is brute force method we try to find all possible combination
o(n^2) is the complexity of running this
*/

/*
vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int> out;
    int front = 0;
    int end = nums.size() - 1;
    int Size = nums.size() - 1;
    for(int i = 0;i <= Size;i++)
    {
        int Sum = 0;
        for(int j = i;j <= Size;j++)
        {
            int Sum =  nums.at(j) + nums.at(i);
            if(Sum == target && i!=j)
            {
                out.push_back(i);
                out.push_back(j);
                cout<<"["<<i<<","<<j<<"]";
                break;
            }
        }   
    }
    return out;
}
*/

/*
One pass Hashtable
We check whether the pair exist or not 
If it exist then we append to the vector and print the values and break the loop
If not we append to to the hash table with value of the vector as key and position in the vector as value of the hash table
Using hash table reduce the searching complexity to o(1)
Traversing complexity to o(n)
*/


vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int> out;
    unordered_map<int,int> hashmap;
    for (int i = 0; i < nums.size(); i++)
    {
        int Complement =target -  nums.at(i);
        if(hashmap.find(Complement) != hashmap.end())
        {
            out.push_back(i);
            out.push_back(hashmap.find(Complement)->second);
            cout<<hashmap.find(Complement)->second<<"  "<<i<<endl;
            break;
        }
        else
        {
            hashmap[nums.at(i)] = i;
        }
    }
    return out;
}

/*
Two pass Hashtable
We check whether the pair exist or not 
If it exist then we append to the vector and print the values and break the loop
Using hash table reduce the searching complexity to o(1)
Traversing complexity to o(n)
Appending values into the hashmap first with complexity of o(n)
*/

/*
vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int> out;
    unordered_map<int,int> hashmap;
    for (int i = 0; i < nums.size(); i++)
    {
        hashmap[nums.at(i)] = i;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        int Complement =target -  nums.at(i);
        if(hashmap.find(Complement) != hashmap.end() && hashmap.find(Complement)->second != i)
        {
            out.push_back(i);
            out.push_back(hashmap.find(Complement)->second);
            cout<<hashmap.find(Complement)->second<<"  "<<i<<endl;
            break;
        }
    }
    return out;
}
*/
