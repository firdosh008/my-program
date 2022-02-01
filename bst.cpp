#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node* left;
node* right;
node(int val)
{
    data=val;
    left=NULL;
    right=NULL;
}
};
node* bst(node* root,int val)
{
    if(root==NULL)
    return new node(val);
    if(val< root->data)
     root->left=bst(root->left,val);
     else
     root->right=bst(root->right,val);
    return root;
}
void in(node* root)
{
    if(root==NULL)
    return;
    in(root->left);
    cout<<root->data<<" ";
    in(root->right);
}
int main()
{
 node* root=NULL;
root=bst(root,5);
bst(root,1);
bst(root,3);
bst(root,4);
bst(root,2);
bst(root,7);
in(root);
  return 0;
}