#include <iostream>


using namespace std;

class bankAccount {
private:
	double balance;

public:

	//constructor
	bankAccount(double initialBalance) {
	
		if (initialBalance >= 0) {
			balance = initialBalance;
		}
		else {
			balance = 0;
			cout << "balance set to 0" << endl;

		}
	}

	// check to balance
	double getBalance() {
		return balance;
	}

	// method to deposite money
	void deposit(double amount) {
		if (amount > 0) {
			balance += amount;
			cout << amount << " into deposited to system" << endl;

		}
		else {
			cout << "invalid account" << endl;

		}
	}


	//method to withdraw money
	void withDraw(double amount) {
		if (amount > 0 && amount <= balance) {
			balance -= amount;
			cout << amount << "  withdrawn from the account" << endl;

		}
		else {
			cout << "Insufficient balance or invalid amount." << endl;

		}
	}
};


int main() {
	// create account
	bankAccount account1(1000);

	// check the balance
	cout << "initial balance: " << account1.getBalance() << "TL" << endl;

	//deposit money
	account1.deposit(1000);
	cout << "current balance: " << account1.getBalance() << "TL" << endl;

	//withdrawn money
	account1.withDraw(300);
	cout << "current balance: " << account1.getBalance() << "TL" << endl;

	return 0;


}