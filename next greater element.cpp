#include<bits/stdc++.h>
using namespace std;
void printNGE(int arr[],int n){
stack<int> s;
//push the first element to stack
s.push(arr[0]);
//iterate for rest of the elements
for(int i=1;i<n;i++){

    if(s.empty()){
        s.push(arr[i]);
        continue;
    }
    while(s.empty()==false && s.top()<arr[i]){
        cout<<s.top()<<"-->"<<arr[i]<<endl;
        s.pop();
    }
    s.push(arr[i]);

}
while(s.empty()==false){
    cout<<s.top()<<"-->"<<-1<<endl;
    s.pop();
}
}


int main(){
int arr[]={1,23,34,2,76,7,76,785,76,76};
int n=sizeof(arr)/sizeof(arr[0]);
printNGE(arr,n);
return 0;
}
