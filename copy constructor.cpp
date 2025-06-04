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

        void setAge(int a){
        age=a;
        }
//default constructor
        student(){
        cout<<"constructor called"<<endl;
        }
// parameterized constructor
        student(int rollNo){
            cout<<"constructor 2 called"<<endl;
            //this => holds the address of current object it is necessary when parameter name and class variable name are same
            this->rollNo=rollNo;
        }
        student(int a,int r){
            cout<<"constructor 3 called"<<endl;
            rollNo=r;
            age=a;
        }
        //whenever we make our own constructor the default or inbuilt constructor will not be available for anymore
        //thus if remove the constructor 1 then error will occur for s1,s2,s3 object
};

int main(){
student s1(12,101);

student s2(s1);
s1.display();
s2.display();
//dynamically all combinations
student *s3= new student(10,1001);
cout<<"s3 :"<<endl;
s3->display();
student s4(*s3);
student *s5= new student(*s3);
student *s6= new student(s1);

// copy assignment operator"="
 student s7(10,100);
 cout<<"s8 created"<<endl;
 student s8(34,232);// we can't call copy constructor now since one constructor is already called and we can't call a const again bcz const is called only once for an object
 s8=s7;

 student *s9=new student(20,23);
 *s9=s7;
 s8=*s9;
s7.display();
s8.display();
s9->display();
}
