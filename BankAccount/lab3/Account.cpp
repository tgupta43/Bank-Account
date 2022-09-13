#include <iomanip>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>

# include "Account.h"

using namespace std;



//*****CONSTRUCTORS
	/*
	 * Purpose:  this default constructor sets balance to 0
	 * 
	 */
		Account::Account()
		{
			balance=0.00;
		}
	/*
	 * Purpose:  this  constructor sets balance to accepted balance
	 * 
	 * @parm bal-the balance it needs to be set to
	 */
		Account::Account(double bal)
		{
			balance=bal;
		}
		
//*********Mutators
	/*
	 * Purpose:  this  mutator allows a deposit
	 * 
	 * @parm amount-the amount deposited 
	 */
		void Account::deposit(double amount)
		{
			balance=balance+amount;
		}
		
	/*
	 * Purpose:  this  mutator allows a withdrawal. Will charge a five dollar 
	 * penalty if you ask for than you have, and will be in debt
	 * 
	 * @parm amount-the amount needed to be withdrawed 
	 */
		void Account::withdraw(double amount)
		{
			if(balance<amount)
			{
				cout << "Five Dollar Penalty! Don't ask for more than what you have!" << endl;
				cout << "Only $" << balance << " available" << endl;
				balance=balance-PENALTY;
			}
			else
			{
				balance=balance-amount;
			}
		}
		
	/*
	 * Purpose:  this  mutator allows to simply set a balance
	 * 
	 * @parm amount-the amount 
	 */
		void Account::setBalance(double amount)
		{
			balance=amount;
		}
		
//*******accessors
		double Account::getBalance() const
		{
			return(balance);
		}
 
 
 
 
 
 
