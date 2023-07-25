#include "vector"
    int longestOnes(vector<int>& nums, int k) {
    int L = 0;
    int R = 0;
    int Max = 0;
    int Zeros = 0;
    while (R != nums.size()){
        if(nums[R] == 0)
            Zeros++;
        while (Zeros > k){
            if(nums[L] == 0)
                Zeros--;
            L++;
        }
        Max = max(Max,R-L + 1);
        R++;
    }
    return Max;
    }