class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size() - 1, i = 0, left = 0;
        int right = n;
        while(i <= right){
            if(nums[i] == 1){
                i++;
            } else if( nums[i] == 0){
                swap(nums[i],nums[left]);
                left++;
                i++;
            } else if(nums[i] == 2){
                swap(nums[i],nums[right]);
                right--;
            }
        }
    }
};