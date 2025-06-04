#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
;
vector<int> arr(5);
for(int i=0;i<5;i++){
    cin>>arr[i];
}
   sort(arr.begin(),arr.end());
int minsum=0,maxSum=0;
int size=arr.size();
for(int i=0;i<4;i++){
    minsum+=arr[i];
    maxSum+=arr[size-1-i];
}
cout<<minsum<<" "<<maxSum;
}


