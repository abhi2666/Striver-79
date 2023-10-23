class Solution
{
public:
    int ans = INT_MIN;
    int getMaxSum(Node *root)
    {
        //handling special cases
        if(root->left == NULL && root->right == NULL){
            return root->data;
        }
        if(root->left == NULL){
            return(getMaxSum(root->right)+root->data);
        }
        if(root->right == NULL){
            return(getMaxSum(root->left)+root->data);
        }
        // can go left or right
        int left = getMaxSum(root->left);
        int right = getMaxSum(root->right);
        ans = max(ans, root->data+left+right);
        return root->data+max(left, right);
    }
    int maxPathSum(Node *root)
    {
        if (root == NULL)
            return ans;
        maxPathSum(root);
        return ans;
    }
};