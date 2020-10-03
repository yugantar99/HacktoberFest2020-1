vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> res;
        if(!root)
            return res;
        stack<TreeNode*> s;
        while(1)
        {
            while(root)
            {
                s.push(root);
                root = root->left;
            }
            if(s.empty())
                break;
            root = s.top();
            s.pop();
            res.push_back(root->val);
            root = root->right;
        }
        return res;
    }
