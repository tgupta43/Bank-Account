#include <iomanip>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>

# include "Bank.h"
# include "Account.h"
# include "printMeFirst.h"


using namespace std;

/*
 * This program will print out the a test of Bank and Account
 * 
 * @file Account.cpp
 * @file Bank.cpp
 * @author Tanya Gupta
 * 
 */
 
 

int main ()
{  
	printMeFirst("Tanya Gupta", "CS-116: Lab3-Bank/Account");
	
	Bank myBank;
	cout << "\nInitial bank balances: " << endl;
	myBank.printBalances(); 
	
	cout << "\nAdding $1000 to saving " << endl;
	cout << "Adding $2000 to checking " << endl;
	myBank.deposit(1000, "S"); //deposit $1000 to savings
	myBank.deposit(2000, "C"); //deposit $2000 to checking
	myBank.printBalances();
	
	cout << "\nTaking out $1500 from checking and moving $200 from savings to checking.\n";
	
	myBank.withdraw(1500, "C"); //withdraw from checking
	myBank.transfer(200, "S"); //transfer 200 from savings
	myBank.printBalances();
	
	cout << "\nTrying to withdraw $900 from Savings." << endl;
	myBank.withdraw(900, "S");
	myBank.printBalances();
	
	cout << "\nTrying to withdraw $400 from Checking." << endl;
	myBank.withdraw(400, "C");
	myBank.printBalances();
	
	return(0);
}
