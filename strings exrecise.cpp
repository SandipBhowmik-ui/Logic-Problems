
#include <bits/stdc++.h>
using namespace std;

int main()
{

	char string1[100], string2[100];

cout << "Enter the first string: " ;
	cin >> string1;


cout << "\nEnter the second string: ";

	cin >> string2;




	if (strcmp(string1, string2) == 0)
	{
		cout << "Entered strings are identical";
	}
	else {
		cout << "Entered strings are not identical";
	}

	return 0;
}


