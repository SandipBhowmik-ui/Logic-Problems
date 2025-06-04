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

        ~student(){
        cout<<"destructor called"<<endl;
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
student s1(12,121);
student s2(13,1313);
student *s3= new student();
//we have to deallocate s3 explicitly since s3 is a pointer
delete s3;
}
