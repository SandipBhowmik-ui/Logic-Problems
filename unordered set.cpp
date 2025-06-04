#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
unordered_set<int> s;
s.insert(12);
s.insert(15);
s.insert(50);
s.insert(20);
s.insert(16);
for(int x:s){
    cout<<x<<endl;
}
}
