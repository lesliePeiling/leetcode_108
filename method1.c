/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */





struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    
    if(numsSize<=0) return NULL;
    
    int locationTmp;
    
    locationTmp=numsSize>>1;
    
    struct TreeNode* root=malloc(sizeof(struct TreeNode));
    
    root->val=nums[locationTmp];
    
    root->left =sortedArrayToBST(nums,locationTmp);
    
    root->right=sortedArrayToBST(nums+locationTmp+1,numsSize-locationTmp-1);
    
    return root;
    
}
