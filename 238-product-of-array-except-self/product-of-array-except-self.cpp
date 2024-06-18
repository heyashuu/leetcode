class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size()   ; 
        vector<int> pre(n) ;
        vector<int> pos(n);
        vector<int> ans ;
        int k = 1 ;
        pre[0] = 1 ;
        for(int i = 1 ; i < n  ; i++){
            pre[i] = pre[i-1] * nums[i-1];

        }
        pos[n  -1] = 1 ;
        for(int i = n  - 2 ; i >= 0 ; i--){
            pos[i] = pos[i+1]*nums[i+1] ; 
        }
        
        for(int i = 0 ; i< n  ; i++){
            ans.push_back(pre[i]*pos[i]) ;
        }
        return ans ; 
    }
};