class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0 ; 
        int right = nums.size() - 1 ;
        int mid = left + (right - left) / 2;
        while(left<=right){
            mid = left + (right - left)/2 ;
            if(nums[mid]==target){
                return 1 ; 
            }
            else if (nums[left]==nums[mid]&&nums[mid]==nums[right]){
                left++ ;
                right-- ; 
            }
            else if(nums[mid]>=nums[left]){
                if(target<=nums[mid]&&target>=nums[left]){
                    right = mid - 1 ;
                }
                else{
                    left = mid + 1 ;
                }
            }
            else{
                if(target>=nums[mid]&&target<=nums[right]){
                    left = mid + 1 ;
                }
                else{
                    right = mid - 1 ;
                }
            }
        }
            return 0 ; 
    }
};