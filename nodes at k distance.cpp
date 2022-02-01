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
 
void sub(node*root,int k)
{
  if(root==NULL||k<0)
  return ;
  if(k==0)
  {
  cout<<root->data<<" ";
  return;
  }
  sub(root->left,k-1);
  sub(root->right,k-1);
}

int  an(node* root,node* t,int k)
{
  if(root==NULL)
  return -1;
  if(root==t)
  {
    sub(root,k);
    return 0;
  }
  int dl=an(root->left,t,k);
  if(dl!=-1)
  {
    if(dl+1==k)
    cout<<root->data<<" ";
    else
    sub(root->right,k-dl-2);
    return 1+dl;
  }
  
  int dr=an(root->right,t,k);
  if(dr!=-1)
  {
    if(dr+1==k)
    cout<<root->data<<" ";
    else
    sub(root->left,k-dr-2);
    
  return 1+dr;
  }
  return -1;
}
int main()
{
 node* root=new node(1);
 root->left=new node(2);
  root->right=new node(3);
   root->left->left=new node(4);
  
   an(root,root->left,1);
  return 0;
}