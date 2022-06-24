vector<int> findDisappearedNumbers(vector<int>& nums)
{
    for(int i = 0;i<nums.size();i++)
    {
        int Cur = abs(nums[i]);
        if(nums[Cur-1] > 0)
            nums[Cur-1] *= -1;
    }
    vector<int> Out;
    for(int i = 0;i<nums.size();i++)
    {
        if(nums[i] > 0)
            Out.push_back(i+1);
    }
    return Out;
}