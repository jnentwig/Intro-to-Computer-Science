//This program wasn't for a class assignment but I created after a class discussion
#include <iostream>
using namespace std;
int main( )
{
    double balance, monthly_payment;
    int count = 0, month = 0, year = 0;
    cout << "enter your amount of debt\n";
    cin >> balance; 
	cout << "enter what you want your monthly payment to be to pay off a $" << balance << " debt \n";
	cin >> monthly_payment;
    while (balance > monthly_payment)
    {
        balance = balance + (0.0445/12) * balance;
        balance = balance - monthly_payment;
        count++;
    }

    cout << "After " << count << " months,\n";
    int actual_month = count;
    while ((actual_month-11) > year*12){
    	year ++;
    	count = count - 12;
	}
	month = count;
	cout << "or " << year << " years and " << month << " months; \n";
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "your last payment will be $" << balance << endl;
    cout << "The total amount you will have paid is $" << monthly_payment*actual_month+balance << endl;
    cout << "In order to make this monthly payment, you will need an extra $" << monthly_payment*12 << " a year. \n";
    return 0;
}
