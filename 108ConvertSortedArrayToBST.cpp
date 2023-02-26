class Solution {
public:
TreeNode* create(int l, int r, vector<int>& nums){
    if (l==r)
    return (new TreeNode(nums[l]));
    if (l>r)
    return NULL;
    int mid = l+(r-l)/2;
    TreeNode *ptr = new TreeNode(nums[mid]);
    ptr->left = create(l,mid-1,nums);
    ptr->right = create(mid+1,r,nums);
    return ptr;
}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int l=0;
        int r=nums.size()-1;
        return create(l,r,nums);
    }
};
