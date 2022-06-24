class Solution {
public:
int firstMissingPositive(vector<int>& nums) {
    int Size = nums.size();
    vector<int> Arr(Size + 1,0);

    for(int i:nums)
        if(i>0 & i <= Size)
            Arr[i]++;
    int i = 1;

    for( i = 1; i<= Size; i++)
        if(!Arr[i]) return i;
    return i;
}
};