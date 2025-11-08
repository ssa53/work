#pragma once
#include <string>

class Account {
public:
	Account(int = 0, std::string = "", double = 0);
	void setAccoutnNumber(int accountNumber);
	int getAccountNumber() const;
	void setName(const std::string name);
	std::string getName() const;
	void setBalance(double balance);
	double getBalance() const;
private:
	int accountNumber;
	std::string name;
	double balance;
};