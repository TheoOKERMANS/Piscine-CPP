# include "Account.hpp"
# include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts()
				<< ";total:" << Account::getTotalAmount()
				<< ";deposits:" << Account::getNbDeposits()
				<< ";withdrawals:" << Account::getNbWithdrawals()
				<< "\n";
}

Account::Account( int initial_deposit )
{
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
	
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex 
				<< ";amount:" << this->_amount
				<< ";created\n";
}

Account::~Account( void )
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex 
				<< ";amount:" << this->_amount
				<< ";closed\n";
}

void	Account::makeDeposit( int deposit )
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex 
				<< ";p_amount:" << this->_amount
				<< ";deposit:" << deposit;

	this->_amount += deposit;
	this->_nbDeposits++;
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;

	std::cout << ";amount:" << this->_amount
				<< ";nb_deposits:" << this->_nbDeposits
				<< "\n";
}

bool	Account::makeWithdrawal( int withdrawal )
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex 
				<< ";p_amount:" << this->_amount
				<< ";withdrawal:";

	if (this->_amount >= withdrawal)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		this->_totalAmount -= withdrawal;
		this->_totalNbWithdrawals++;
		std::cout << withdrawal
				<< ";amount:" << this->_amount
				<< ";nb_withdrawals:" << this->_nbWithdrawals
				<< "\n";
		return (1);
	}
	std::cout << "refused\n";
	return (0);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex 
				<< ";amount:" << this->_amount
				<< ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals
				<< "\n";
}

void	Account::_displayTimestamp( void )
{
	std::time_t result = std::time(NULL);
	std::tm* now = std::localtime(&result);
    std::cout << "[" << (now->tm_year + 1900) 
				<< (now->tm_mon + 1) << now->tm_mday
				<< "_" << now->tm_hour << now->tm_min
				<< now->tm_sec << "]";
}