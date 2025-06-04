#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];

}
int sum=0,sqsum=0;
for(int i=0;i<n;i++){
sum=sum+arr[i];
}
for(int i=0;i<n;i++){
sqsum=sqsum+pow(arr[i],2);
}
int ans=(pow(sum,2)-sqsum)/2;
cout<<ans;
return 0;
}
