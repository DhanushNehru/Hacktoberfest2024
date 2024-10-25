class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> vec;
        TreeNode* current = root;

        while (current != nullptr || !st.empty()) {
            // Reach the leftmost node of the current node
            while (current != nullptr) {
                st.push(current);
                current = current->left;
            }

            // Current must be nullptr at this point, so we process the top of the stack
            current = st.top();
            st.pop();
            vec.push_back(current->val);  // Add the node value to the result

            // Now visit the right subtree
            current = current->right;
        }

        return vec;
    }
};
