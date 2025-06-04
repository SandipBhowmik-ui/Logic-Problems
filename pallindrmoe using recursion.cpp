#include<iostream>
using namespace std;
bool isPallindrome(string str,int low,int high){
if(low>=high)
    return true;
if(str[low]!=str[high])
    return false;
return isPallindrome(str,low+1,high-1);

}
int main(){
string str;
cin>>str;
int len=str.length();
if(isPallindrome(str,0,len-1)){
    cout<<"pallindrome";
}
else
    cout<<"not pallindrome";
return 0;
}
