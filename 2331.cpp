#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode(int x) {
      val = x;
      left = right = nullptr;
   }
};

bool solve(TreeNode *root){
   if(!root->left && !root->right)return root->val;
   
   bool leftPart = solve(root->left);
   bool rightPart = solve(root->right);

   if(root->val == 2){
      return leftPart||rightPart;
   }
   else return leftPart && rightPart;
}
int main(){
   TreeNode *root = new TreeNode(2);
   TreeNode *l1 = new TreeNode(1);
   TreeNode *r1 = new TreeNode(3);
   root->left = l1;
   root->right = r1;
   TreeNode *l2 = new TreeNode(0);
   TreeNode *r2 = new TreeNode(1);

   r1->left = l2;
   r1->right = r2;
   bool ans =solve(root);

   cout<<ans<<endl;
   return 0;
}