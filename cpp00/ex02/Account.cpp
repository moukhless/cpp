/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:12:15 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/18 22:44:42 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <chrono>
#include <string>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;
int	pre_total_amount;

Account::Account(){
}

Account::Account( int initial_deposit )
{
	_amount = initial_deposit;
	Account::_displayTimestamp();
	_accountIndex = Account::_nbAccounts;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	Account::_totalAmount += _amount;
	std::cout << "created" << std::endl;
	Account::_nbAccounts++;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

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
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	Account::_totalAmount = 0;
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}
void	Account::_displayTimestamp( void )
{
    std::time_t timestamp = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

    // Convert the timestamp to a struct tm for easy manipulation
    std::tm timeInfo = *std::localtime(&timestamp);

    // Format the date and time as a string
    char formattedTime[20];  // 20 characters are enough for "YYYYMMDD_HHMMSS"
    std::strftime(formattedTime, sizeof(formattedTime), "%Y%m%d_%H%M%S", &timeInfo);
    std::string timestampStr(formattedTime);

    std::cout << '[' << timestampStr << "] ";
}


void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	std::cout << "amount:" << _amount << ";";
	Account::_totalNbDeposits++;
	Account::_totalAmount += _amount;
	std::cout << "nb_deposits:" << ++_nbDeposits << std::endl;
}
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
	Account::_totalAmount = 0;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	if (Account::_amount - withdrawal < 0)
	{
		std::cout << "withdrawal:refused" << std::endl;
		Account::_totalAmount += _amount;
		return (false);
	}
	else
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		_amount -= withdrawal;
		std::cout << "amount:" << _amount << ";";
		Account::_totalNbWithdrawals++;
		Account::_totalAmount += _amount;
		std::cout << "nb_withdrawals:" << ++_nbWithdrawals << std::endl;
		return (true);
	}
}
