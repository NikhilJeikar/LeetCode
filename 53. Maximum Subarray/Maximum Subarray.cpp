#include <bits/stdc++.h>

using namespace std;


int maxSubArray(vector<int>& nums) {
    int neg = 1;
    int n = nums.size();
    int ans = INT_MIN;
    for(int i = 0; i < n; i++){
        if(nums[i] > 0){
            neg = 0;
            break;
        }
        ans = max(ans, nums[i]);
    }
    if(neg)
        return ans;
    int cursum = 0;
    ans = 0;
    for(int i = 0; i < n; i++){
        cursum += nums[i];
        if(cursum < 0)
            cursum = 0;
        ans = max(ans, cursum);
        
    }
    return ans;
}
int main()
{
    vector<int> Vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(Vec) << endl;
}