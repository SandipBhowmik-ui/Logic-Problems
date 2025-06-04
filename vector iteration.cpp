#include<bits/stdc++.h>
#include<vector>

using namespace std;
int main(){
vector<int> v;
v.push_back(2);
v.push_back(1);
v.push_back(3);
v.push_back(4);
for(int i=0;i<v.size();i++){
cout<<v[i]<<endl;
}
vector<int>::iterator it;

for(it=v.begin();it!=v.end();it++)
{
cout<<*it<<endl;
}
for(auto elemnt:v){
cout<<elemnt<<endl;
}
cout<<"v"<<endl<<endl;
v.pop_back();
vector<int> v2(3,50);
swap(v,v2);
for(auto elemnt:v){
cout<<elemnt<<endl;
}
cout<<"v2"<<endl<<endl;
for(auto elemnt:v2){
cout<<elemnt<<endl;
}
v2.push_back(7);
cout<<"sorted"<<endl<<endl;

sort(v2.begin(),v2.end());
for(auto elemnt:v2){
cout<<elemnt<<endl;
}
return 0;
}
