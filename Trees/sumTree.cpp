class Solution
{
public:
    int flag = 1; // 1 means true and 0 means false

    bool leafNode(Node* root){
        if(root->left == NULL && root->right == NULL) return true;
        else return false;
    }

    void sumTree(Node* root){
        if(root == NULL) return 0;

        int left = sumTree(root->left);
        int right = sumTree(root->right);

        if(root->data != left + right && !leafNode(root)) flag = 0;
        return root->data + left + right;
    }

    bool isSumTree(Node *root)
    {
        sumTree(root);
        if(flag == 1) return true;
        else return false;
    }
};