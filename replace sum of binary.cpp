#include<iostream>
using namespace std;

struct node{

int data;
node* left;
node* right ;
node(int val)
{
    data=val;
left=NULL;
right=NULL;
}
};

void sum(node* root)
{
if(root==NULL)
return ;
sum(root->left);
sum(root->right);
if(root->left!=NULL)
root->data+=(root->left->data);
if(root->right!=NULL)
root->data+=(root->right->data);

}
void pre(node* root)
{
if(root==NULL)
return;
cout<<root->data<<" ";
pre(root->left);
pre(root->right);
}

int main()
{
  node* root=new node(1);
  root->left=new node(2);
  root->right=new node(3);
  root->left->left=new node(4);
  root->left->right=new node(5);
  root->right->left=new node(6);
  root->right->right=new node(7);
  pre(root);
  cout<<endl;
  sum(root);
  pre (root);
    return 0;
}