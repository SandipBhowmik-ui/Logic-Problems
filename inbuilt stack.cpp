#include <iostream>
using namespace std;
#include <stack>
int main(){
stack<int> s;
s.push(412);
s.push(12);
s.push(23);
s.push(45);
s.push(47);
cout<<s.top()<<endl;
s.pop();//this does not return anything so cout will cause error
cout<<s.top()<<endl;
cout<<s.size()<<endl;
cout<<s.empty()<<endl;
s.pop();
s.pop();
s.pop();
s.pop();
cout<<s.empty()<<endl;
}
