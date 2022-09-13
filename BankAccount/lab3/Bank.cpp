#include <iomanip>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>

#include "Bank.h"

using namespace std;

//***Constructors
	
	/*
	 * Purpose: default constructor for Bank class, sets checkingAmount
	 * and savingsAmount to 0
	 * 
	 */
		Bank::Bank()
		{
			checking.setBalance(0);
			savings.setBalance(0);
		}
		
	/*
	 * Purpose: constructor for Bank class, sets checkingAmount
	 * and savingsAmount to accepted parameters
	 * 
	 * @parm checkingAmount-amount in checking account
	 * @parm savingsAmount-amount in savings account
	 * 
	 */
		Bank::Bank(double checkingAmount, double savingsAmount)
		{
			checking.setBalance(checkingAmount);
			savings.setBalance(savingsAmount);
		}
			
		
//*****mutators

	/*
	 * Purpose: mutator for Bank class, deposits amount to
	 * chosen account
	 * 
	 * @parm amount-amount you want to deposit
	 * @parm savingsAmount-choose which account to deposit in, use "S"
	 * for savings, "C" for checking
	 * 
	 */
		void Bank::deposit(double amount, string account)
		{
			if(account=="C")
			{
				checking.deposit(amount);
			}
			else if(account=="S")
			{
				savings.deposit(amount);
			}
		}
			
			
	/*
	 * Purpose: mutator for Bank class, withdraws amount to
	 * chosen account
	 * 
	 * @parm amount-amount you want to withdraws
	 * @parm savingsAmount-choose which account to withdraw from, use "S"
	 * for savings, "C" for checking
	 * 
	 */
		void Bank::withdraw(double amount, string account)
		{
			if(account=="C")
			{
				if(checking.getBalance()<amount)
				{
					cout << "Five Dollar Penalty! Don't ask for more than what you have!" << endl;
					checking.withdraw(PENALTY);
				}
				else
				{
					checking.withdraw(amount);
				}
			}
			else if(account=="S")
			{
				if(savings.getBalance()<amount)
				{
					cout << "Five Dollar Penalty! Don't ask for more than what you have!" << endl;
					savings.withdraw(PENALTY);
				}
				else
				{
					savings.withdraw(amount);
				}
			}
			
		}
		
	/*
	 * Purpose: mutator for Bank class, transfers amount from
	 * chosen account to other account
	 * 
	 * @parm amount-amount you want to deposit
	 * @parm savingsAmount-choose which account to transfer from, use "S"
	 * for savings, "C" for checking
	 * 
	 */
		void Bank::transfer(double amount, string account)
		{
			if(account=="C")
			{
				checking.withdraw(amount);
				savings.deposit(amount);
			}
			
			else if(account=="S")
			{
				checking.deposit(amount);
				savings.withdraw(amount);
			}
		}
			
		
	/*
	 * Purpose: displays balances in both checking and savings account
	 * 
	 */
		void Bank::printBalances() const
		{
			cout << fixed << setprecision(2);
			cout << "Savings Account Balance: $" << savings.getBalance() << endl;
			cout << "Checking Account Balance: $" << checking.getBalance() << endl;
		}
		
 
