#include<iostream>
#include<vector>

using namespace std;

/*
Using Vector implementation
*/
/*
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
{
    vector<int> Sorted;
    int ind1 = 0,ind2 = 0;
    int Arr1Size = nums1.size();
    int Arr2Size = nums2.size();
    int Size = nums1.size() + nums2.size();
    for (int i = 0; i < Size; i++)
    {
        if( ind1 < Arr1Size && ind2 < Arr2Size && nums2.at(ind2) >= nums1.at(ind1))
        {
            Sorted.push_back(nums1.at(ind1));
            ind1++;
        }
        else if( ind1 < Arr1Size && ind2 < Arr2Size && nums2.at(ind2) < nums1.at(ind1))
        {                                       
            Sorted.push_back(nums2.at(ind2));
            ind2++;
        }
        else
        {
            break;
        }
    }
    if(ind2 == Arr2Size)
    {
        for (int i = ind1; i < Arr1Size; i++)
        {
            Sorted.push_back(nums1.at(i));
        }
        
    }
    if(ind1 == Arr1Size)
    {
        for (int i = ind2; i < Arr2Size; i++)
        {
            Sorted.push_back(nums2.at(i));
        }
        
    }
    double ret = 1;
    if(Size%2 == 0)
    {
        ret = Sorted.at(Size/2) + Sorted.at(Size/2 - 1);
        ret = ret / 2;
    }
    else
    {
        ret = Sorted.at(Size/2);
    }
    return ret;
}
*/

/*
Using array implementation
*/
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
{
    int Arr1 = nums1.size();
    int Arr2 = nums2.size();
    int Size = Arr2 + Arr1;
    int Arr[Size];
    int i=0,j=0;
    int Count = 0;
    while (i < Arr1 && j < Arr2)
    {
        if(nums1[i] < nums2[j])
        {
            Arr[Count] = nums1[i];
            i++;
        }
        else
        {
            Arr[Count] = nums2[j];
            j++;
        }
        Count++;
    }
    if(i != Arr1)
    {
        while (i < Arr1)
        {
            Arr[Count] = nums1[i];
            i++;
            Count++;
        }
    }
    if(j != Arr2)
    {
        while (j < Arr2)
        {
            Arr[Count] = nums2[j];
            j++;
            Count++;
        }
    }
    if(Size%2 == 0)
    {
        return double (Arr[Size/2]+Arr[Size/2 - 1])/2;
    }
    else
    {
        return double (Arr[Size/2 ]);
    }
    
}

int main()
{
    vector<int> array1,array2;
    array1.push_back(1);
    array1.push_back(3);

    array2.push_back(2);
    array2.push_back(7);
    cout<<findMedianSortedArrays(array1,array2)<<endl;
}