#include<iostream>
using namespace std;
#include "Queue using array.h"
int main(){
QueueUsingArray q(5);

q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);
q.enqueue(50);
q.enqueue(10);
cout<<q.front()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.getSize()<<endl;
cout<<q.isEmpty()<<endl;
}
