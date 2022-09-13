#ifndef BANK_H
#define BANK_H
/*
 * Define the headers' information for Employee function
 */
 
#include <iomanip>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>

# include "Account.h"

/* 
 * forward declaration - tells the compiler that the
 * class variables and constructors
 * are defined else where so just go use it, and
 * it will be resolved during the linking time.
 */
 
using namespace std;
 
class Bank
{
	private:
		Account checking;
		Account savings;
		
	public:
		//constructors
		Bank();
		Bank(double checkingAmount, double savingsAmount);
		
		//mutators
		void deposit(double amount, string account);
		void withdraw(double amount, string account);
		void transfer(double amount, string account);
		
		//display
		void printBalances() const;
};
#endif
