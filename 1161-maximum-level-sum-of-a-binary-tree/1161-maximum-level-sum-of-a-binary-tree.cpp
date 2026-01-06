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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int val = INT_MIN;
        int ans = -1;
        int l = 0;
        while(!q.empty())
        {
            int m=0;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* f = q.front();
                m+=f->val;
                if(f->left!=nullptr)
                q.push(f->left);
                if(f->right!=nullptr)
                q.push(f->right);
                q.pop();
            }
            l++;
            cout<<m<<l<<endl;
            if(m>val)
            {
                val=m;
                ans=l;
            }
        }
        return ans;
    }
};