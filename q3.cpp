
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Student{
    string name;
    int age;
    int rollno;
public:
    // Create funtions here with the name given
    void set_variable(string a,int b,int c);
    void print_variable();
};
void Student::set_variable(string a,int b,int c)
   {
        name=a;
        age=b;
        rollno=c;
    }
void Student::print_variable(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<rollno<<endl;

}



int main()  {
    Student obj1;
    obj1.set_variable("Robin", 15, 10);
    Student obj2;
    obj2.set_variable("Rahul", 20, 14);
    obj1.print_variable();
    obj2.print_variable();
    return 0;
}
