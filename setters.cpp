#include<iostream>
using namespace std;
#include"students.cpp"
int main(){
student s1;
student *s2= new student;
s1.setAge(23);
s2->setAge(22);
s1.display();
s2->display();

}
