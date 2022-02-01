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

void z(node* root)
{
  if(root==NULL)
  return ;
  stack<node*>c;
  stack<node*>n;
  bool lr=true;

  c.push(root);
  while(!c.empty())
  {
    node* temp=c.top();
    c.pop();
    if(temp)
    {
    cout<<temp->data<<" ";
     if(lr)
     {
       if(temp->left)
       n.push(temp->left);
       if(temp->right)
       n.push(temp->right);
     }
     else
       {
          if(temp->right)
       n.push(temp->right);
       if(temp->left)
       n.push(temp->left);
       }
    }
    if(c.empty()) 
    {
      lr=!lr;
      swap(c,n);
    }
  }

}

int main()
{
  node* root=new node(12);
  root->left=new node(9);
  root->right=new node(15);
  root->left->left=new node(5);
  root->left->right=new node(10);
z(root);
  return 0;
}