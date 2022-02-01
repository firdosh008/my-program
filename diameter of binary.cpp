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

int cal(node* root,int* height)
{
    if(root==NULL)
    {
        *height=0;
 return 0; 

    }
   
    int l=0,r=0;
int ld=cal(root->left,&l);
int rd=cal(root->right,&r);
int curr=l+r+1;
*height = max(l,r)+1;
return max(curr,max(ld,rd));
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
  int height=0;
  cout<<cal(root,&height);
    return 0;
}