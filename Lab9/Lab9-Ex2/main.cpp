#include <iostream>
using namespace std;

class Account {
public:
	Account(double d)
	{
		_balance = d;
	}

	virtual double GetBalance()
	{
		return _balance;
	}

	virtual void test()
	{
		cout << "Account test" << endl;
	} //not so usefull for test()

	virtual void PrintBalance() = 0;
private:
	double _balance;    // another naming convention for private variables
};


class CheckingAccount : public Account
{
public:
	CheckingAccount(double d) : Account(d) {}
	void test()
	{
		cout << "CheckingAccount test" << endl;
	}  //not so useful for test()

	void PrintBalance()
	{
		cout << "Checking account balance: " << GetBalance() << endl;
	}
};

class SavingsAccount : public Account {
public:
	SavingsAccount(double d) : Account(d) {}

	void test()
	{
		cout << "SavingsAccount test" << endl;
	}   //not so useful for test()

	// NO IMPLEMENTATION FOR PrintBalance.. tHE METHID FROM BASE CLASS IS USED
	void PrintBalance() { cout << "Savings account balance: " << GetBalance() << endl; }
};

int main()
{
	CheckingAccount *pChecking = new CheckingAccount(100.00);
	SavingsAccount  *pSavings = new SavingsAccount(1000.00);

	pChecking->PrintBalance();  // eroare
	pSavings->PrintBalance();  // eroare
	cout << "\n\n";

	Account *pAccount;
	pAccount = pChecking;
	pAccount->PrintBalance();
	pAccount->test();    //not so useful for test()

	// Call PrintBalance using a pointer to Account.
	pAccount = pSavings;
	pAccount->PrintBalance();
	pAccount->test();

	return 0;
}
