/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:49:50 by tkim              #+#    #+#             */
/*   Updated: 2022/10/10 19:52:13 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Account.hpp"

/*
static variable initialize
*/
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/*
생성자, 소멸자
*/
Account::Account( void )
{
	Account(0);
}

// index:1;amount:54;created
Account::Account( int initial_deposit )
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created\n";
}

// [19920104_091532] index:6;amount:106;closed
Account::~Account( void )
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed\n";
}



int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << "\n";

}

// [19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << "\n";
}

// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	int p_amount = this->_amount;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << "\n";
}

// [19920104_091532] index:0;p_amount:47;withdrawal:refused
// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	int p_amount = this->_amount;
	if(checkAmount() >= withdrawal){
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;

		std::cout << " index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << "\n";
		return true;
	}else{
		std::cout << " index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused\n";
		return false;
	}
}

int		Account::checkAmount( void ) const
{
	return this->_amount;
}

void	Account::_displayTimestamp( void )
{
	time_t		current_time;
	struct tm	*local_time;

	time(&current_time);
	local_time = localtime(&current_time);


	std::cout << "[" << local_time->tm_year + 1900
		<< std::setw(2) << std::setfill('0') << local_time->tm_mon + 1
		<< std::setw(2) << std::setfill('0') << local_time->tm_mday << "_"
		<< std::setw(2) << std::setfill('0') << local_time->tm_hour
		<< std::setw(2) << std::setfill('0') << local_time->tm_min
		<< std::setw(2) << std::setfill('0') << local_time->tm_sec << "]";
}
