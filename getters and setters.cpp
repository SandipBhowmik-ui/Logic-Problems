//getters and setters

#include<iostream>
using namespace std;
class student{
    private:
int age;
public:
int rollNo;
    public:
        void display(){
        cout<<age<<" "<<rollNo<<endl;
        }
        //within the class everything accessible
        int getAge(){
        return age;
        }
};

int main(){
    //creates object statically
student s1,s2,s3,s4;
//s1.age=24;
s1.rollNo=104;

cout<<" s1: age "<<s1.getAge()<<endl;
cout<<" s1: roll no"<<s1.rollNo<<endl;


//creates object dynamically
student *s6= new student;

//s6->age=23;
s6->rollNo=102;

s1.display();
s2.display();
(*s6).display();
//or
s6->display();
}
