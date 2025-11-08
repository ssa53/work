#include <iostream>
#include "Account.h"
#include "AccountSystem.h"
#include <string>
using namespace std;

void printMenu();
int main() {
	AccountSystem system;
	int choice;
	do {
		printMenu();
		cout << "? ";
		cin >> choice;
		cout << endl;
		switch (choice) {
		case 1:
			system.input();
			break;
		case 2:
			system.update();
			break;
		case 3:
			system.add();
			break;
		case 4:
			system.Delete();
			break;
		case 5:
			system.display();
			break;
		case 6:
			break;
		}
	} while (choice != 6);
	return 0;
}

void printMenu()  {
	cout << "1. input initial information" << endl;
	cout << "2. update an account" << endl;
	cout << "3. add a new account" << endl;
	cout << "4. delete an account" << endl;
	cout << "5. display information" << endl;
	cout << "6. end program" << endl;
}