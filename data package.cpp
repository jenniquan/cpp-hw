// A- 30$/m for 4000. After, 0.3 $/mb 
// B- 50$/m for 10000. After, 0.2 $/mb
// C- 70$/m unlimited
// 1. cin package and data.  Cout bill
// 2. cin data.  Cout savings package B - C
// 3. back calculate bill to data package

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int menu, data, mData;
	char package;
	float bill, bBill, savings, packageA, packageB, packageC;
	
	cout << "Please pick one of the following options: \n";
	cout << "1. What is my bill? \n";
	cout << "2. How much do I save with data package C vs. B? \n";
	cout << "3. Which data package am I on? \n";
	cin >> menu;

	if (menu == 1){
		cout << "Which data package are you on? A, B, or C?\n";
		cin >> package;
		cout << "How much data (megabytes) did you use? \n";
		cin >> data;
	
		if (package == 'A' or package == 'a') {
			if (data <= 4000)
				cout << "Bill: $30.00\n";
			else {
				mData = data - 4000;
				bill = (mData * 0.3) + 30;  // make that end at 0.00
				cout << "Bill: $" << bill << endl;				
			}
		}
		else if (package == 'B' or package == 'b'){
			if (data <= 10000)
				cout << "Bill: $50.00\n";
			else{
				mData = data - 10000;
				bill = (mData * 0.2) + 50;
				cout << "Bill: $" << bill << endl; // make this end at 0.00
			}
		}
		else if (package == 'c' or package == 'C')
			cout << "Bill: $70.00" << endl;
		else
			cout << "That is not a valid package." << endl;
	}	
	else if (menu == 2){
		cout << "How much data (megabytes) did you use?\n";
		cin >> data;
		if (data <= 10000)
			cout << "Savings: -$20.00\n";
		else{
			mData = data- 10000;
			bBill = (mData * 0.2) + 50;
			savings = bBill-70;
			cout << "Savings: " << savings << endl;
		}
	}
	else if (menu == 3){
		cout << "What is your bill? \n";
		cin >> bill;

		if ((fmod((10*(bill-30)), 3)==0))
			cout << "You have package A. \n";
		else if ((fmod((10*(bill-50)), 2)==0))
			cout << "You have package B. \n";
		else if (bill == 70)
			cout << "You have package C. \n";
		else
			cout << "You are not using our data packages.";
		

	}
	else
		cout << "That is not a valid menu option.";	
return 0;
}	
	
