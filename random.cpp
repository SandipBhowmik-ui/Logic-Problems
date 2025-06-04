
// Sample code to perform I/O:

#include <iostream>

using namespace std;
int* reverse(int arr[],int size){
	int end=size-1;
	int temp;
for(int i=0;i<size/2;i++){
	temp=arr[i];
	arr[i]=arr[end];
	arr[end]=temp;
	end--;
}

return arr;
}

int main() {
	int num;
	cin >> num;
	 int arr[num];								// Reading input from STDIN
			// Writing output to STDOUT
for(int i=0;i<num;i++){
	cin>>arr[i];}

int* ptr= reverse(arr,num);
for(int i=0;i<num;i++){
	cout<<arr[i]<<endl;}
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
