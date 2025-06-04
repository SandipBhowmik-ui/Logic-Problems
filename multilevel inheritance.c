#include<iostream.h>
using namespace std;


class Emp1
{
int eno;
char name[15],job[15];
public:
    void input()
    {
        cout<<"\nEnter employee number";
        cin>>eno;
        cout<<"\nEnter employee name";
        cin>>name;
        cout<<"\nEnter employee job";
        cin>>job;
    }
    void printemp()
    {
        cout<<"\nEmployee Number "<<eno;
        cout<<"\nEmployee Name "<<name;
        cout<<"\nEmployee Job "<<job;
    }
};
class Emp2 : public Emp1
{
int sal;
public:
    void inputemp2()
    {
        cout<<"\nEnter employee salary";
        cin>>sal;
    }
    void printemp2()
    {
        cout<<"\nEmployee salary::"<<sal;
    }

};
class Emp : public Emp2
{
public:
    void display()
    {
    cout<<"\n\t\tEmployee Details";
    cout<<"\n\t\t----------------";
    }
};
int main()
{
    Emp e;
e.input();
e.inputemp2();
e.display();
e.printemp();
e.printemp2();
 return 0;
}
