#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left, *right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
bool c(node* root,node* min,node* max)
{
    if(root==NULL)
    return true;
    if(min!=NULL&&root->data<=min->data)
        return false;
            if(max!=NULL&&root->data>=max->data)
            return false;
       bool left= c(root->left,min,root);
        bool right= c(root->right,root,max);
        return left&&right;
}



int main()
{
 node* root= new node(5);
root->left=new node(2);
root->right=new node(8);
cout<<c(root,NULL,NULL);
 
  return 0;
}