#include<iostream>
using namespace std;
int main(){
 s="NIT Agartala";
int count=1;
for(int i=0;i<s.size();i++){
if(s[i]==" "){
count++;
}
}
cout<<count;
return 0;
}
