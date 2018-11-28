/*tion for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> in) {
        int in_size = in.size();
        if(in_size == 0)
            return NULL;
        vector<int> pre_left,pre_right,in_left,in_right;
        int val = pre[0];
        TreeNode* node = new TreeNode(val);
        //first find the root position;
        int p = 0 ;
        for(p; p < in_size; p++){
            if(in[p] == val)
                break;
        }
        
        for(int i = 0 ; i < in_size ; i++){
            if(i < p){
                in_left.push_back(in[i]);
                pre_left.push_back(pre[i+1]);
                
            }
            else if(i > p){
                in_right.push_back(in[i]);
                pre_right.push_back(pre[i]);
            }
        }
        node->left = reConstructBinaryTree(pre_left,in_left);
        node->right = reConstructBinaryTree(pre_right,in_right);
        return node;
    }
};


