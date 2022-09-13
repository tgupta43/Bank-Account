#ifndef ACCOUNT_H
#define ACCOUNT_H
/*
 * Define the headers' information for acoount function
 */
 
#include <iomanip>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>

#define PENALTY 5

/* 
 * forward declaration - tells the compiler that the
 * class variables and constructors
 * are defined else where so just go use it, and
 * it will be resolved during the linking time.
 */
 
using namespace std;
 
class Account
{
	private:
		double balance;
		
	public:
		//constructors
		Account();
		Account(double bal);
		
		//mutators
		void deposit(double amount);
		void withdraw(double amount);
		void setBalance(double amount);
		
		//accessors
		double getBalance() const;
				
};
#endif
