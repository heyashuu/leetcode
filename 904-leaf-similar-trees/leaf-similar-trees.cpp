/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode*root , vector<int>& v ){
        if(root==NULL)return ; 
         
        else{
            solve(root->left , v ) ;
            if(root->left==NULL&&root->right==NULL){
            v.push_back(root->val);
        }
        solve(root->right , v ) ; 
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1  ;
        vector<int> v2  ;
        solve(root1 , v1 ) ;
        solve(root2 , v2) ;
        // sort(v1.begin(),v1.end()) ; 
        // sort(v2.begin(),v2.end()) ; 
        if(v1.size()!=v2.size())return false ;
        for(int i = 0 ; i < v1.size() ; i++){
            if(v1[i]!=v2[i]){
                return false ;
            }
        }
        return true ; 

    }
};