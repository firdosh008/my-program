#include<bits/stdc++.h>
using namespace std;

struct node{

int data;
struct node* left;
struct node* right;

node(int val)
{
    data=val;
    left=NULL;
    right=NULL;
}
};
void pre(struct node* root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    pre(root->left);
    pre(root->right);

}
void in(struct node* root)
{
    if(root==NULL)
    return;
    in(root->left);
    cout<<root->data<<" ";
     in(root->right);

}
void pos(struct node* root)
{
    if(root==NULL)
    return;
    pos(root->left);
    
     pos(root->right);
     cout<<root->data<<" ";

}


int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
   root->left->right=new node(5);
   root->right->left=new node(6);
   root->right->right=new node(7);
  // pre(root);
  //in(root);
pos(root);
    return 0;
}