#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node* left;
struct node* right;
node(int val){
data=val;
left=NULL;
right=NULL;
}
};
int main(){
/*create root*/
struct node* root=new node(1);
/* 1
  / \
NULL NULL
*/
root->left=new node(2);
root->right=node(3);
root->left->left=new node(4);
return 0;
}
