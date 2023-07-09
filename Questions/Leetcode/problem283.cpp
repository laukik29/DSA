class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int i =0;
        //shift all non zeroes elements to left
        //i = non zero value
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]!=0) {
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }
};