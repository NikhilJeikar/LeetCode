int findDuplicate(vector<int>& nums)
{
    int Ret = -1;
    for(int i:nums)
    {
        int Cur = abs(i);
        if(nums[Cur] < 0)
        {
            Ret = Cur;
            break;
        }
        nums[Cur] *= -1;
    }
    return Ret;
}