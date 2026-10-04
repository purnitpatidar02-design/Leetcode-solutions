class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo = 0;
        int mid = 0;
        int hi = nums.size()-1;
        while(mid<=hi){
            if(nums[mid]==2){
                // mid and high ko swap kr do
                int temp = nums[mid];
                nums[mid] = nums[hi];
                nums[hi] = temp;
                hi--;
            }
            else if(nums[mid]==0){
                // low and mid ko swap kr do
                int temp = nums[mid];
                nums[mid] = nums[lo];
                nums[lo] = temp;
                lo++;
                mid++;
            }
            else mid++;
        }
    }
};