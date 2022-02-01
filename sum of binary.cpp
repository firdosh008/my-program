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
int ma(node* root,int &ans)
{
    if(root==NULL)
    return 0;
   int l= ma(root->left,ans);
   int r=ma(root->right,ans);
   int nodemax=max(max(root->data,root->data +l+r),
   max(root->data +l,root->data +r));
   ans=max(nodemax,ans);
    int sin=max(root->data,max(root->data+l,root->data+r));
    return sin;
    
    }
int su(node* root)
{
    int ans=INT_MIN;
    ma(root,ans);
    return ans;
}
int main()
{
 node* root=new node(1);
 root->left=new node(2);
  root->right=new node(3);
   root->left->left=new node(4);
  
  root->right->right=new node(5);

   cout<<su(root);
  return 0;
}