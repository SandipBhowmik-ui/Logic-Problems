#include <iostream>
using namespace std;

int main() {
	//code
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	 int sum = 0;
    int i=n-1;
    while(i>=0) {
        if (i % 2 == 1)
            {
            sum -= (a[i] * a[i]);}

        else

           { sum += (a[i] * a[i]);}
          --i;
    }

	cout<<sum;
	return 0;
}
