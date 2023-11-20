/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:32:30 by niceguy           #+#    #+#             */
/*   Updated: 2023/11/20 14:54:36 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdio>
#include <iostream>
#include "Account.hpp"
#define TIMESTAMP_FORMAT "[%04d%02d%02d_%02d%02d%02d]"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{

	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_displayTimestamp();
	std::printf(" index:%d;amount:%d;created\n", _accountIndex, initial_deposit);
	_nbAccounts++;
	_totalAmount += initial_deposit;
}

Account::~Account(void)
{
	_nbAccounts--;
	_displayTimestamp();
	std::printf(" index:%d;amount:%d;closed\n", _accountIndex, _amount);
}

void	Account::makeDeposit( int deposit )
{
	int	last_amount;

	_nbDeposits++;
	last_amount = _amount;
	_amount += deposit;
	_displayTimestamp();
	std::printf(" index:%d;p_amount:%d;deposit:%d;amount:%d;nb_deposits:%d\n", _accountIndex, last_amount, deposit, _amount, _nbDeposits);
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int	last_amount;

	last_amount = _amount;
	_displayTimestamp();
	std::printf(" index:%d;p_amount:%d;withdrawal:", _accountIndex, last_amount);
	if (_amount >= withdrawal)
	{
		_nbWithdrawals++;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::printf("%d;amount:%d;nb_withdrawals:%d\n", withdrawal, _amount, _nbWithdrawals);
	}
	else
		std::cout << "refused" << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::printf(" index:%d;amount:%d;deposits:%d;withdrawals:%d\n", _accountIndex, _amount, _nbDeposits, _nbWithdrawals);
}

/*Statics*/

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::printf(" accounts:%d;total:%d;deposits:%d;withdrawals:%d\n", _nbAccounts, _totalAmount, _totalNbDeposits, _totalNbWithdrawals);
}

void	Account::_displayTimestamp( void )
{
	std::time_t t;
	std::tm* 	now;

	t = std::time(0);
	now = std::localtime(&t);
	std::printf(TIMESTAMP_FORMAT, now->tm_year + 1900, now->tm_mon + 1, now->tm_mday, now->tm_hour, now->tm_min, now->tm_sec);
}
