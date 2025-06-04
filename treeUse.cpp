#include<iostream>
#include "TreeNode.h"
using namespace std;
TreeNode* takeInput(){
int rootData;
cout<<"Enter input";
cin>>rootData;
TreeNode* root=new TreeNode(rootData);
int n;
cout<<"enter number of children of"<<rootData;
cin>>n;

}
void printTree(TreeNode* root){
    if(root==NULL){
        return;

    }
cout<<root->data<<":";
for(int i=0;i<root->children.size();i++){
    cout<<root->children[i]->data<<",";
}
cout<<endl;
for(int i=0;i<root->children.size();i++)
{
    printTree(root->children[i]);
}
}

int main(){

TreeNode* root=new TreeNode(1);
TreeNode* node1=new TreeNode(2);
TreeNode* node2=new TreeNode(3);
root->children.push_back(node1);
root->children.push_back(node2);
printTree(root);
}
