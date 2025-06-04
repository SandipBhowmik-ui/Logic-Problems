#include<bits/stdc++.h>

using namespace std;
struct Queue{
stack<int> s1,s2;
void enQueue(int x){

//push item into s1
s1.push(x);
}

//dequeue an item from the queue
int deQueue(){
//if both stacks are empty
if(s1.empty()&& s2.empty()){
    cout<<"Queue is empty";
    exit(0);
}
if(s2.empty()){
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
}
int x= s2.top();
s2.pop();
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
