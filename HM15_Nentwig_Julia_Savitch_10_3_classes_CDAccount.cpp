//Names: Julia Nentwig
//Date: 12/08/2017
//Homework # 15
//Problem # (Savitch problem 10-3)

//
#include<iostream>
using namespace std;
class CDAccount{
	private:
		double balance;
    	double interest_rate;
    	int term;
    public:
    	CDAccount(double money, double percent, int time){
    		balance = money;
    		interest_rate = percent;
    		term = time;
		}
    	
		double InitialBalance(){
			return balance;
		}
		double InterestRate(){
			return interest_rate;
		}
		double BalanceAtMaturity(){
			double rate_fraction, interest;
			rate_fraction = interest_rate/100.0;
			interest = balance*rate_fraction*(term/12);
			return (balance + interest);
		}
		double Term(){
			return term;
		}
		void output(ostream& write){
			write << "balance:\t" << balance
				<< "\ninterest rate:\t" << interest_rate
				<< "\nterm:\t" << term << endl;
		}
		void input(istream& read){
			read >> balance >> interest_rate >> term;
		}
};

int main()
{
  char dummy;

  double balance;
  double intRate;
  int term;
  CDAccount account = CDAccount( 100.0, 10.0, 6);
  cout << "CD Account interest rate: "
       << account.InterestRate() << endl;
  cout << "CD Account initial balance: "
       << account.InitialBalance() << endl;
  cout << "CD Account balance at maturity is: "
       << account.BalanceAtMaturity() << endl;
  cout << "CD Account term is: " << account.Term()
       << " months"<< endl;
  account.output( cout );
  cout << "Enter CD initial balance, interest rate, "
       << " and term:" << endl;
  account.input(cin);
  cout << "CD Account interest rate: "
       << account.InterestRate() << endl;
  cout << "CD Account initial balance: "
       << account.InitialBalance() << endl;
  cout << "CD Account balance at maturity is: "
       << account.BalanceAtMaturity() << endl;
  cout << "CD Account term is: " << account.Term()
       << " months"<< endl;
  account.output( cout );
  cout << endl;

  cout << "Enter any character and press return to terminate." << endl;
  cin >> dummy;
  return 0;
}
