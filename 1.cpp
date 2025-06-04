
#include <bits/stdc++.h>
using namespace std;
// Iterative C++ program to reverse an array
/*
void rvereseArray(int arr[],  int end)
{
    int start=0;
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}


void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}


int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};

	int n = sizeof(arr) / sizeof(arr[0]);

	// To print original array
	printArray(arr, n);

	// Function calling
	rvereseArray(arr, n-1);

	cout << "Reversed array is" << endl;

	// To print the Reversed array
	printArray(arr, n);

	return 0;
}
*/
void reverseArray(int arr[],int start,int end){

if(start>=end)
{
    return;
}
  int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

reverseArray(arr,start+1,end-1);

}
void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}



int main(){
int arr[]={1,2,3,4,5,6};
int n=sizeof(arr)/sizeof(arr[0]);

reverseArray(arr,0,n-1);
printArray(arr,n);
}
