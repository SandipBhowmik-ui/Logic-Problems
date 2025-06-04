#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node* lchild;
struct node* rchild;
node(int val){
data=val;
rchild=NULL;
lchild=NULL;
}
};

void preorder(struct node* root){
if(root==NULL)
{return;}
cout<<root->data<<" ";
preorder(root->lchild);
preorder(root->rchild);
}

void inorder(struct node* root){
if(root==NULL){
    return;
}
inorder(root->lchild);
cout<<root->data<<" ";
inorder(root->rchild);
}

void postorder(struct node* root){
if(root==NULL){
    return;
}
postorder(root->lchild);
postorder(root->rchild);
cout<<root->data<<" ";
}


int main(){
struct node* root= new node(1);
root->lchild= new node(2);
root->rchild= new node(3);
root->lchild->lchild= new node(4);
root->lchild->rchild= new node(5);
root->rchild->lchild= new node(6);
root->rchild->rchild= new node(7);
preorder(root);
cout<<'\n';
inorder(root);
cout<<'\n';
postorder(root);
}
