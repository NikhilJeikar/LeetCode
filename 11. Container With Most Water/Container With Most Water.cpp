#include<iostream>
#include<vector>

using namespace std;

int maxArea(vector<int>& height) 
{
    int R = height.size() - 1,L = 0;
    int Area = 0;
    /*
    This traverse thorugh the vector and move the left and right pointer based on the size
    */
    while (L < R)
    {
        Area = max(Area,min(height[R],height[L])*(R-L));
        if(height[L] < height[R]) L++;
        else R--;
    }
    
 return Area;   
}

int main()
{
 vector<int> List;
 List.push_back(1);
 List.push_back(8);
 List.push_back(6);
 List.push_back(2);
 List.push_back(5);
 List.push_back(4);
 List.push_back(8);
 List.push_back(3);
 List.push_back(7);
 cout<<maxArea(List)<<endl;
}   