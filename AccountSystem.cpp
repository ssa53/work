#include <iostream>
#include "AccountSystem.h"
#include <string>
#include <iomanip>
using namespace std;

AccountSystem::AccountSystem() {
	for (int i = 0; i < 10; i++) {
		accounts[i] = nullptr;
	}
}
AccountSystem::~AccountSystem() {
	for (int i = 0; i < 10; i++) {
		delete accounts[i];
		accounts[i] = nullptr;
	}
}

void AccountSystem::input() {
	int num;
	string name;
	double balance;
	cout << "Enter account number (1 - 10, 0 to end input): ";
	cin >> num;
	do {
		if (accounts[num - 1] == nullptr) {
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter balance: ";
			cin >> balance;
			accounts[num - 1] = new Account{ num,name,balance };
		}
		else {
			cout << "Account already exists." << endl;
		}
		cout << "Enter account number (1 - 10, 0 to end input): ";
		cin >> num;
	} while (num != 0);
}

void AccountSystem::update() {
	int num;
	cout << "Enter account number to update(1 - 10): ";
	cin >> num;
	if (accounts[num - 1] == nullptr) {
		cout << "Account has no information." << endl;
	}
	else {
		cout << fixed;
		cout.precision(2);
		cout << setw(2) << setfill('0') << left << accounts[num - 1]->getAccountNumber() << " " << setw(10) << left << setfill(' ')
			<<accounts[num - 1]->getName() << accounts[num - 1]->getBalance() << endl;
		cout << "Enter charge (+) or payment (-): ";
		double tmp;
		cin >> tmp;
		accounts[num - 1]->setBalance(accounts[num - 1]->getBalance() + tmp);
		cout << setw(2) << setfill('0') << left << accounts[num - 1]->getAccountNumber() << " " << setw(10) <<
			accounts[num - 1]->getName() << accounts[num - 1]->getBalance() << endl;
	}
}

void AccountSystem::add() {
	cout << "Enter new account number (1 - 10): ";
	int tmp;
	cin >> tmp;
	if (accounts[tmp - 1] == nullptr) {
		string name;
		double balance;
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter balance: ";
		cin >> balance;
		accounts[tmp - 1] = new Account{ tmp,name,balance };
	}
	else {
		cout << "Account already exists." << endl;
	}
}

void AccountSystem::Delete() {
	cout << "Enter account number to delete ( 1 - 10 ): ";
	int tmp;
	cin >> tmp;
	if (accounts[tmp - 1] == nullptr) {
		cout << "Account #" << tmp << " is empty." << endl;
	}
	else {
		delete accounts[tmp - 1];
		cout << "Account #" << tmp << " deleted." << endl;
	}
}

void AccountSystem::display() const{
	cout << "Accounts information." << endl;
	for (Account* account : accounts) {
		cout << fixed;
		cout.precision(2);
		cout << setw(2) << left << setfill('0') << account->getAccountNumber() << " " << setw(10) << left << setfill(' ')
			<< account->getName() << account->getBalance() << endl;
	}
	cout << endl;
}