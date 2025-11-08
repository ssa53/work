#include <iostream>
#include "Account.h"
#include <string>
using namespace std;

Account::Account(int accountNumber, string name, double balance) {
	this->accountNumber = accountNumber;
	this->name = name;
	this->balance = balance;
}

void Account::setAccoutnNumber(int accountNumber) {
	this->accountNumber = accountNumber;
}

int Account::getAccountNumber() const {
	return accountNumber;
}

void Account::setName(const string name) {
	this->name = name;
}

string Account::getName() const {
	return name;
}

void Account:: setBalance(double balance) {
	this->balance = balance;
}

double Account::getBalance() const {
	return balance;
}

