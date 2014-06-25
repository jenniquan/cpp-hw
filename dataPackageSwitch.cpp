// A- 30$/m for 4000. After, 0.3 $/mb 
// B- 50$/m for 10000. After, 0.2 $/mb
// C- 70$/m unlimited
// 1. cin package and data.  Cout bill
// 2. cin data.  Cout savings package B - C
// 3. cin bill.  Cout package

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
	int data, mData;
	char menu, package;
	float bill, bBill, savings, packageA, packageB, packageC;
	
	cout << "Please pick one of the following options: \n";
	cout << "1. What is my bill? \n";
	cout << "2. How much do I save with data package C vs. B? \n";
	cout << "3. Which data package am I on? \n";
	cin >> menu;

	switch (menu){
	
		case '1':
			cout << "Which data package are you on? A, B, or C?\n";
			cin >> package;
			cout << "How much data (megabytes) did you use? \n";
			cin >> data;
			
			switch (package) {
				case 'a': // fall through
				case 'A':
					if (data <= 4000)
						cout << "Bill: $30.00\n";
					else {
						mData = data - 4000;
						bill = (mData * 0.3) + 30;  
						cout << setprecision(2) << fixed << "Bill: $" << bill << endl;
					}
					break;	
					
				case 'b': //fall through
				case 'B':
					if (data <= 10000)
						cout << "Bill: $50.00\n";
					else{
						mData = data - 10000;
						bill = (mData * 0.2) + 50;
						cout << setprecision(2) << fixed << "Bill: $" << bill << endl;
					}
					break;
					
				case 'c': //fall through
				case 'C':
					cout << "Bill: $70.00" << endl;
					break;
					
				default:
					cout << "That is not a valid package." << endl;		
					break;				
			}
			
			break;
			
		case '2':
			cout << "How much data (megabytes) did you use?\n";
			cin >> data;
			if (data <= 10000)
				cout << "Savings: -$20.00\n";
			else{
				mData = data- 10000;
				bBill = (mData * 0.2) + 50;
				savings = bBill-70;
				cout << setprecision(2) << fixed << "Savings: " << savings << endl;
			}
			break;
			
		case '3':
			cout << "What is your bill? \n";
			cin >> bill;
	
			if ((fmod((10*(bill-30)), 3)==0))
				cout << "You have package A. \n";
			if ((fmod((10*(bill-50)), 2)==0))
				cout << "You have package B. \n";
			if (bill == 70)
				cout << "You have package C. \n";
			else
				cout << "You are not using our data packages.";	
				
			break;
			
		default:
			cout << "Not a valid menu option.";
	}

	return 0;
}	
	
	
