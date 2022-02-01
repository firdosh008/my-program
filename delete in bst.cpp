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
node* inordersucc(node* root)
{
    node* c=root;
    while(c && c->left!=NULL)
    c=c->left;
    return c;
}
node* d(node* root,int k)
{
if(k<root->data)
root->left=d(root->left,k);
else if(k>root->data)
root->right=d(root->right,k);
else
{
    if(root->left==NULL)
    {
        node* temp=root->right;
        free(root);
        return temp;

    }
    else if(root->right=NULL)
    {
        node* temp=root->left;
        free(root);
        return temp;
    }
    node* temp=inordersucc(root->right);
    root->data=temp->data;
    root->right=d(root->right,k); 
}
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
 node* root=new node(4);
 root->left=new node(2);
 root->right=new node(5);
 root->left->left=new node(1);
  root->left->right=new node(3);
  root->right->right=new node(6);
  in(root);
  root=d(root,5);
  in(root);
  return 0;
}