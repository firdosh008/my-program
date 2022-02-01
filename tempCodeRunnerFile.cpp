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
void swap(int* a,int *b)
{
int t=*a;
*a=*b;
*b=t;
}
void c(node* root,node** f,node** m,node** l,node**p)
{
     if(root==NULL)
    return ;
    c(root->left,f,m,l,p);

    if(*p&&root->data<(*p)->data)
    {
        if(!*f)
        {
            *f=*p;
            *m=root;
        }
        else
        {
            *l=root;
        }
    
    }
    *p=root;
    c(root->right,f,m,l,p);
}
void r(node* root)
{
   
  node *f,*m,*l,*p;
  f=NULL;
  m=NULL;
  l=NULL;
  p=NULL;
  c(root,&f,&m,&l,&p);

  if(f&&l)
  swap(&(f->data),&(l->data));
  else if(f&&m)
  swap(&(f->data),&(m->data));
  
}
void in(node* root)

{
    if (root==NULL)
    return;
    in(root->left);
    cout<<root->data<<" ";
    in(root->right);
}

int main()
{
 node* root=new node(6);
 root->left=new node(9);
  root->right=new node(3);
   root->left->left=new node(1);
    root->left->right=new node(4);
    root->right->right=new node(13);
    in(root);
    cout<<endl;
     r(root);
     in(root);
     return 0;
}