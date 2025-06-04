#include<iostream>
using namespace std;
struct Node{
int data;
Node* next;
Node(int x){
data=x;
next=NULL;
}
};
Node* insertBegin(Node* head, int x){
Node*temp = new Node(x);
temp->next=head;
return temp;
}
int getMiddle(Node* head)
{
struct Node* slow=head;
struct Node* fast=head;
if(head==NULL){
return -1;
}
while(fast!=NULL && fast->next!=NULL){
fast=fast->next->next;
slow=slow->next;

}

return slow->data;

}

int main(){

Node* head=NULL;
head=insertBegin(head,5);
head=insertBegin(head,4);
head=insertBegin(head,3);
head=insertBegin(head,2);
head=insertBegin(head,1);
int ans=getMiddle(head);
cout<<ans;
return 0;
}
