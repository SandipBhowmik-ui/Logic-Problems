#include<iostream>
using namespace std;
//late binding
class MyBase
{
public:
    void show(){
    cout<<"base class show func called"<<endl;
    }
    virtual void print(){
    cout<<"base class print func called"<<endl;
    }
};

class MyDerived:public MyBase{
public:
    void show(){
    cout<<"derived class show func called"<<endl;
    }
    void print(){
    cout<<"derived class print func called"<<endl;
    }

};

int main(){
MyBase *baseptr;
MyDerived derivedObj;
baseptr= &derivedObj;
baseptr->print();
baseptr->show();
}
