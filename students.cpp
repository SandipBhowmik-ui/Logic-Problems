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
};
