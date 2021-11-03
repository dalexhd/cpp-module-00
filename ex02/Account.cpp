/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:40:04 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/03 18:20:55 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

static	std::string	timestamp(void)
{
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);
	return std::to_string(now->tm_year + 1900)
		+ std::to_string(now->tm_mon + 1)
		+ std::to_string(now->tm_mday)
		+ "_"
		+ std::to_string(now->tm_hour)
		+ std::to_string(now->tm_min)
		+ std::to_string(now->tm_sec);
}

int	Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
};


int	Account::getTotalAmount(void)
{
	return Account::_totalAmount;
};

int	Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
};

int	Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
};

void	Account::makeDeposit(int deposit)
{
	if (this->_amount + deposit < 0)
	{
		std::cout << timestamp() + " "
			<< "index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";deposit:refused"
			<< "\n";
	}
	else
	{
		this->_nbDeposits++;
		Account::_totalNbDeposits++;
		std::cout << timestamp() + " "
			<< "index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";deposit:" << deposit
			<< ";amount:" << this->_amount + deposit
			<< ";nb_deposits:" << this->_nbDeposits
			<< "\n";
		Account::_totalAmount += deposit;
		this->_amount += deposit;
	}
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount - withdrawal < 0)
	{
		std::cout << timestamp() + " "
			<< "index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";withdrawal:refused"
			<< "\n";
	}
	else
	{
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << timestamp() + " "
			<< "index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";withdrawal:" << withdrawal
			<< ";amount:" << this->_amount - withdrawal
			<< ";nb_withdrawals:" << this->_nbWithdrawals
			<< "\n";
		Account::_totalAmount -= withdrawal;
		this->_amount -= withdrawal;
	}
	return (true);
}

void	Account::displayAccountsInfos(void)
{
	std::cout << timestamp() + " "
		<< "accounts:" << getNbAccounts()
		<< ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals()
		<< "\n";
}

void	Account::displayStatus(void) const
{
	std::cout << timestamp() + " "
		<< "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals
		<< "\n";
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	std::cout << timestamp() + " "
		<< "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";created\n";
}


Account::~Account(void)
{
	std::cout << timestamp() + " "
		<< "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";closed"
		<< "\n";
}
