    int missingNumber(vector<int>& nums) {
        unsigned int n = nums.size();
        int sum = 0;
        for(int i:nums)
            sum += i;
        return n*(n+1)/2 - sum;
    }