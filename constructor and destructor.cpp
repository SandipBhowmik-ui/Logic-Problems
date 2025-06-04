//for one object constructor is called only once during its creation
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
student s1;
s1.display();
student s2(12);
s2.display();
/*student *s3 = new student;
s3->display();
cout<<"parameterized constructor demo" <<endl;
student s4(10);
s4.display();
student s5(20,1002);
s5.display();*/
}
