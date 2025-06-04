#include<iostream>
using namespace std;
int main(){
int num,p,first=0,second=1,next;
cin>>num;
for(p=0;p<num;p++){
if(p<=1){
next=p;
}
else{
next=first+second;
first=second;
second=next;

}
cout<<next<<" ";

}
return 0;
}
