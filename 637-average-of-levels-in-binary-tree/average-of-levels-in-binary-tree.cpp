
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        vector<double> ans;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            long double levelSum =0.0;

            for(int i=0;i<size ; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                levelSum += node->val;
                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
            }
             long double avg = levelSum/size;
            ans.push_back(avg);
    
        }
        return ans;

        }
};