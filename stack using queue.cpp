#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Stack{
//two inbuilt queues
queue<int> q1,q2;
int curr_size;
public:
    Stack(){
    curr_size=0;
    }
    void push(int x){
    curr_size++;
    q2.push(x);
    //push all remaining elements of q1 to q2
    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    //swap the names of two queues
    queue<int> q = q1;
    q1=q2;
    q2=q;
    }

    void pop(){
    //if no elements are in q1
    if(q1.empty()){
        return;
    }
    q1.pop();
    curr_size--;
    }
    int top(){
        if(q1.empty()){
            return -1;
        }
        return q1.front();
    }
    int size(){
    return curr_size;
    }

};

int main(){
Stack S;
S.push(12);
S.push(13);
S.push(14);
cout<<S.top()<<endl;
S.pop();
cout<<S.top()<<endl;
S.pop();
cout<<S.top()<<endl;
S.pop();
cout<<S.top()<<endl;
return 0;
}
