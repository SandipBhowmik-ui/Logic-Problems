#include<bits/stdc++.h>
using namespace std;
struct Tnode{
int data;
Tnode* left;
Tnode* right;
Tnode(int d){
data=d;
left=NULL;
right=NULL;
}
};
void preOrder(Tnode *root){
if(root==NULL){
return;}

}

int main(){
Tnode* root=new Tnode(10);
root->left=new Tnode(20);
root->right=new Tnode(30);
root->left->left=new Tnode(40);
}
