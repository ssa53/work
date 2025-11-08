#pragma once
#include <string>
#include "Account.h"

class AccountSystem {
private:
	Account* accounts[10];
public:
	AccountSystem();
	~AccountSystem();
	void input( ); 
	void update();
	void add();
	void Delete();
	void display() const;
};