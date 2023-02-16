/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:47:47 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/16 15:52:23 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	this->_totalAmount += initial_deposit;
	this->_totalNbDeposits = 1;
	Account::_nbAccounts++;
}

Account::~Account( void ){}

int	Account::getNbAccounts(void)
{
	// return(1);
	return(_nbAccounts);
}
int	Account::getTotalAmount(void)
{
	// return(1);
	return(_totalAmount);
}
int	Account::getNbDeposits(void)
{
	// return(1);
	return(_totalNbDeposits);
}
int	Account::getNbWithdrawals(void)
{
	// return(1);
	return(_totalNbWithdrawals);
}
void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();

	std::cout << "accounts: " << getNbAccounts() << ";total: " << getTotalAmount() << ";deposits: " << getNbDeposits() << ";withdrawals: " << getNbWithdrawals() << std::endl; 
}

void	Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index: " << _accountIndex << ";p_amount: " << _amount << ";withdrawal: " << std::endl;

	if (checkAmount() < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return false;
	}

	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;

	std::cout << withdrawal << ";amount: " << _amount << ";nb_withdrawals: " << _nbWithdrawals << std::endl;

	return true;
}

int		Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t	timestamp = std::time(nullptr);
	std::tm*	now = std::localtime(&timestamp);

	std::cout << "[" << (now->tm_year + 1900);
	std::cout << std::setw(2) << std::setfill('0') << (now->tm_mon + 1);
	std::cout << std::setw(2) << std::setfill('0') << now->tm_mday << "_";
	std::cout << std::setw(2) << std::setfill('0') << now->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << now->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << now->tm_sec << "] ";
}

Account::Account(void)
{
	std::cout << "Account default constructor call" << std::endl;
}

