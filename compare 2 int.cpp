//Enter 2 numbers.  Compare the numbers.  
#include <iostream>
using namespace std;

int main ()
{
	int a, b;
	
	cout << "Enter a number: \n";
	cin >> a;
	cout << "Enter another number: \n";
	cin >> b;
	
	if (a > b)
		cout << a << " is greater.\n";
	else if (a < b) 
		cout << b << " is greater.\n";
	else if (a == b) 
		cout << "The numbers are equal.\n";
	return 0;
}
