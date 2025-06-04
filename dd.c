#include<iostream>
class A{
public:
    int a;
    int* b;
    A(int x, int* y):a(x),b(y){}
    A(const  A& Ain){
    this.a=Ain.a;
    }

};


void main(){
A p(10,NULL);
A q(p);
if(q.b)
    std::cout<<"true";
else
    std::cout<<"false;

}
