#pragma once
#include <iostream>
using namespace std;
class Validation
{
public:
	static bool isVaildname(string name) {
		if (name.length() >= 5 && name.length() <= 20) {
			for (int i = 0; i < name.size(); i++) {
				if (isalpha(name[i])) {
					return true;
				}
			}
		}
		else {
			cout << "Invalid name " << endl;
			return false;
		}

	}
	static bool isValidPassword(string password) {
		if (password.length() >= 8 && password.length() <= 20) {
			return true;
		}
		else {
			cout << "Invalid pasword " << endl;
			return false;
		};
	}

	static bool isValidBalance(double balance) {
		if (balance >= 1500)
		{
			return true;
		}
		else {
			cout << "Invalid balance " << endl;
			return false;
		};
	}
	static bool isValidSalary(double salary) {
		if (salary >= 5000)
		{
			return true;
		}
		else {
			cout << "Min Salary is 5000  " << endl;
			return false;
		};
	}

};

