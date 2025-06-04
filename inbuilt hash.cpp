#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
unordered_map<string, int> ourmap;

//insert
pair<string,int> p("abc",1);
ourmap.insert(p);
ourmap["def"]=1;
//find or access
cout<<ourmap["abc"]<<endl;
cout<<ourmap.at("abc")<<endl;
cout<<ourmap["ghi"]<<endl;//we have to be very careful while using square brackets->if it
//finds that key doesn't exist then it inserts 0 to it
cout<<"size "<<ourmap.size()<<endl;
//check presence

if(ourmap.count("ghi")>0){
cout<<"ghi is present"<<endl;}
//erase
ourmap.erase("ghi");
cout<<"size "<<ourmap.size()<<endl;
if(ourmap.count("ghi")>0){
cout<<"ghi is present"<<endl;}
return 0;
}
