#include<bits/stdc++.h>
using namespace std;
//this code gave segmentation fault in gfg
bool ispar(string x)
    {
        stack<char> s;
        char a;
        for(int i=0;i<x.length();i++){
            if(x[i]=='('|| x[i]=='{'||x[i]=='['){
                s.push(x[i]);
                continue;
            }
            if(x.empty()){
                return false;
            }
            switch(x[i]){
                case ')':
                a=s.top();
                s.pop();
                if(a=='{'||a=='['){
                    return false;
                }
                break;
                case '}':
                a=s.top();
                s.pop();
                if(a=='('||a=='['){
                    return false;
                }
                break;
                case ']':
                a=s.top();
                s.pop();
                if(a=='{'||a=='('){
                    return false;
                }
                break;

            }
        }
        return (s.empty());
    }

    int main(){
    string x="{(){[]";
    if(ispar(x))
    {cout<<"balanced";
    }
    else{cout<<"not balanced";
    }
    return 0;}
