#include<iostream>
using namespace std;
class base{
public:
    virtual void show()=0;
    virtual void print()=0;};
    class Derived:public base{
public:
    void show()
    {cout<<"show func";}

    };


int main(){
base obj;
base *b;
Derived d;
b=&d;
b->show();
return 0;
}
