//seconds to days
#include <iostream>
using namespace std;

int main ()
{
	int seconds, minutes, hours, days;
	
	cout << "Enter number of seconds: \n";
	cin >> seconds;
	
	minutes = seconds / 60;
	hours = minutes/ 60;
	days = hours / 24;
	hours %= 24;
	minutes %= 60;
	seconds %= 60;
	
	cout << "Days: " << days << endl; 
	cout << "Hours: " << hours << endl;
	cout << "Minutes: " << minutes << endl;
	cout << "Seconds: " << seconds << endl;
	return 0;
}
