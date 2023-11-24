#pragma once
#include "Person.h"
class Clint :
    public Person
{
private:
	float balance;
public:


	//constractors
	Clint() :Person(){
		this->balance = 0.0;
	}
	Clint(int id, string name, string password, float balance):Person(id, name, password)
	{
		set_balance(balance);
	}

	void set_balance(double balance) {
		while (true) {
			if (Validation::isValidBalance(balance)) {
				this->balance = balance;
				return;
			}
			else {

				cout << "Min balance is 1500 " << endl;
				cout << "Enter balance: ";
				cin >> balance;
				cin.ignore(1, '\n');
			}
		}
	}

	float get_balance() {
		return balance;
	}
	void deposit(int amount) {
		balance += amount;

	}
	void withdraw(int amount) {
		if (amount <= balance) {
			balance -= amount;
		}
		else {
			cout << "amount exceeded";
		}

	}

	void transfereTo(Clint& a, int amount) {
		if (amount <= balance) {
			a.deposit(amount);
			balance -= amount;
		}
		else {
			cout << "Amount exceeded";
		}

	}
	void check_Blance() {
		cout << get_balance();

	}
	void display_info() {
		Person::display_info();
		cout << "balance: " << balance << endl;
	}

};

