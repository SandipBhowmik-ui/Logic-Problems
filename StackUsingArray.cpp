#include<climits>
#include<iostream>

using namespace std;
template<typename T>
class StackUsingArray{
T *data;
int capacity;
int nextIndex;

public:
    StackUsingArray(){
    data = new T[4];
    nextIndex=0;
    capacity=4;
    }
    //return the number of elements present in my stack
    int size(){
    return nextIndex;
    }

    bool isEmpty(){
    return nextIndex==0;
    }
    void push(T element){
    if(nextIndex==capacity){
        T* newData = new T[2*capacity];
        for(int i=0;i<capacity;i++){
            newData[i]=data[i];

        }
        capacity*=2;
        delete [] data;
        data=newData;
    }
    data[nextIndex]=element;
    nextIndex++;
    }
    //Delete Elemnt
    T pop(){
    if(isEmpty()){
        cout<<"Stack is empty"<<endl;
        return INT_MIN;
    }
        nextIndex--;
        return data[nextIndex];
    }
    T top(){
        if(isEmpty()){
        cout<<"Stack is empty"<<endl;
        return INT_MIN;
    }
    return data[nextIndex-1];
    }
};
