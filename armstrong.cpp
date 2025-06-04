#include<iostream>
#include<math.h>
using namespace std;
int main(){
int num,digit,sum=0;
cin>>num;
int temp=num;
while(num!=0){
digit=num%10;
sum+=pow(digit,3);
num=num/10;
}
if(sum==temp){
cout<<"Nuumber is Armstrong";}
else{cout<<"Nuumber is not Armstrong";}
return 0;
}
