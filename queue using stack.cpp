#include<bits/stdc++.h>

using namespace std;
struct Queue{
stack<int> s1,s2;
void enQueue(int x){
//move all elements from s1 to s2
while(!s1.empty()){
    s2.push(s1.top());
    s1.pop();
}
//push item into s1
s1.push(x);
//push everything back to s1
while(!s2.empty()){
    s1.push(s2.top());
    s2.pop();
}
}
//dequeue an item from the queue
int deQueue(){
//if stack is empty
if(s1.empty()){
    cout<<"Queue is empty";
    exit(0);
}
int x = s1.top();
s1.pop();
return x;
}
};

int main(){
Queue q;
q.enQueue(2);
q.enQueue(3);
q.enQueue(4);
q.enQueue(5);
cout<<q.deQueue()<<'\n';
cout<<q.deQueue()<<'\n';
cout<<q.deQueue()<<'\n';
return 0;
}
