class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos ;
        vector<int> neg ; 
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]>0){
                pos.push_back(nums[i]) ;
            }
            else{
                neg.push_back(nums[i ]) ; 
            }
        }
        
        for(int i = 0 ; i < nums.size() ; i++){
            if(i%2==0){
                nums[i] = pos[i/2] ; 
            }
            else{
                nums[i] = neg[(i-1)/2] ;
            }
        }
        return nums ; 
    }
};