class Solution {
private:
    int solve(int n, Node* root, int leftK, int rightK){
        if(root == NULL) return 0;

        // go left and right 
        int left = 0, right = 0;
        if(leftK > 0){
            left = solve(n, root->left, leftK-1, rightK);
        }
        if(rightK > 0){
            right = solve(n, root->right, leftK, rightK-1);
        }
        return root->data+(left, right);
    }
  public:
    int maximumSum(int n, Node* root, int k) {
        // can go to left and right atmost k times
        if(n == 0) return 0;
        return solve(n, root, k, k);
    }
};