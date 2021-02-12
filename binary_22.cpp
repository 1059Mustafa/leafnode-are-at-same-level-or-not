bool ans;
int helper(Node* root){
if(!root) return 0;
int left=helper(root->left);
int right=helper(root->right);
if(root->left and root->right and left!=right)
ans=false;
return 1+max(left,right);
}

bool check(Node *root)
{
 ans=true;
 helper(root);
 return ans;
}
