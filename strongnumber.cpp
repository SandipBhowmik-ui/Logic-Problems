#include<iostream>
using namespace std;
int main(){
int save,ip,n,sum=0,fact =1;
cin>>ip;
save=ip;
while(ip!=0){
n=ip%10;

for(int i=1;i<=n;i++){
 fact=fact*i;
}
sum+=fact;
fact=1;
ip/=10;

}
if(sum==save){
cout<<"Strong Number";}
else{
cout<<"Not strong number";
}
return 0;
}
