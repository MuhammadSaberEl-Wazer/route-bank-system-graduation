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
	}
	static bool isValidPassword(string password) {
		if (password.length() >= 8 && password.length() <= 20) {
			return true;
		}
	}

	static bool isValidBalance(double balance) {
		if (balance >= 1500.0)
		{
			return true;
		}
	}
	static bool isValidSalary(double salary) {
		if (salary >= 5000.0)
		{
			return true;
		}
	}

};

