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
    pair<int,int> dia(TreeNode*root){
        if(root==nullptr){
            pair<int,int> p = make_pair(0,0) ; 
            return p ; 
        }
        pair<int,int> left = dia(root->left) ; 
        pair <int,int> right = dia(root->right) ; 

        int leftdia = left.first ;
        int rightdia = right.first ;
        int di = left.second+right.second+1 ; 

        pair<int , int > ans ;
        ans.first = max(leftdia,max(rightdia,di)) ; 
        ans.second = max(left.second,right.second)+1;
        return ans ; 
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return dia(root).first-1; 
    }
};