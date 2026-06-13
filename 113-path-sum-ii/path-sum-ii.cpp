class Solution {
public:
void PathSum( vector<vector<int>>&A , vector<int>&B , int T , TreeNode* Root , int Sym ){
      if( Root == nullptr ) return ;

      Sym+=Root->val;
      B.push_back(Root->val);
      if( Root-> left == nullptr && Root->right == nullptr && Sym == T ){
          A.push_back(B);
      }

      PathSum( A , B , T , Root -> left , Sym );
      PathSum( A , B , T , Root -> right , Sym );
      B.pop_back();
    

}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>A;
        vector<int>Temp;
        PathSum( A , Temp , targetSum , root , 0 );
        return A;
    }
};