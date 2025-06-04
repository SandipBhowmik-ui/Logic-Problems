#include<iostream>
using namespace std;
class student{
    public:
int age;
int rollNo;
    public:
        void display(){
        cout<<age<<" "<<rollNo<<endl;
        }
};
int main(){
    //creates object statically
student s1,s2,s3,s4;
s1.age=24;
s1.rollNo=104;
//creates object dynamically
student *s6= new student;

s6->age=23;
s6->rollNo=102;

s1.display();
s2.display();
(*s6).display();
//or
s6->display();
}
