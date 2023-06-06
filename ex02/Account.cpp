/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:37:49 by yena              #+#    #+#             */
/*   Updated: 2023/06/06 16:38:21 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
  _accountIndex = Account::_nbAccounts++;
  _amount = initial_deposit;
  _totalAmount += initial_deposit;
  Account::_displayTimestamp();
  std::cout << "index:" << _accountIndex << ";";
  std::cout << "amount:" << _amount << ";";
  std::cout << "created" << std::endl;
}

Account::~Account(void) {
  Account::_displayTimestamp();
  std::cout << "index:" << _accountIndex << ";";
  std::cout << "amount:" << _amount << ";";
  std::cout << "closed" << std::endl;
}

int Account::getNbAccounts(void) {
  return (Account::_nbAccounts);
}

int Account::getTotalAmount(void) {
  return (Account::_totalAmount);
}

int Account::getNbDeposits(void) {
  return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
  return (Account::_totalNbWithdrawals);
}

int getNbWithdrawals(void) {
  std::cout << "getNbWithdrawals called" << std::endl;
  return (1);
}

void Account::displayAccountsInfos(void) {
  Account::_displayTimestamp();
  std::cout << "accounts:" << Account::getNbAccounts() << ";";
  std::cout << "total:" << Account::getTotalAmount() << ";";
  std::cout << "deposit:" << Account::getNbDeposits() << ";";
  std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit) {
  Account::_displayTimestamp();
  std::cout << "index:" << _accountIndex << ";";
  std::cout << "p_amount:" << _amount << ";";
  std::cout << "deposit:" << deposit << ";";
  _amount += deposit;
  _totalAmount += deposit;
  _totalNbDeposits++;
  std::cout << "amount:" << _amount << ";";
  std::cout << "nb_deposits:" << ++_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
  Account::_displayTimestamp();
  std::cout << "index:" << _accountIndex << ";";
  std::cout << "p_amount:" << _amount << ";";
  if (withdrawal > _amount) {
    std::cout << "withdrawal:refused" << std::endl;
    return (false);
  }
  std::cout << "withdrawal:" << withdrawal << ";";
  _totalNbWithdrawals++;
  _amount -= withdrawal;
  _totalAmount -= withdrawal;
  std::cout << "amount:" << _amount << ";";
  std::cout << "nb_withdrawals:" << ++_nbWithdrawals << std::endl;
  return (true);
}

int Account::checkAmount(void) const {
  std::cout << "not using?!!!!" << std::endl;
  return (1);
}

void Account::displayStatus(void) const {
  Account::_displayTimestamp();
  std::cout << "index:" << _accountIndex << ";";
  std::cout << "amount:" << _amount << ";";
  std::cout << "deposits:" << _nbDeposits << ";";
  std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void) {
  std::time_t now = std::time(0);
  std::tm *time = std::localtime(&now);
  std::cout << "[";
  std::cout << 1900 + time->tm_year;
  std::cout << std::setw(2) << std::setfill('0') << 1 + time->tm_mon;
  std::cout << std::setw(2) << std::setfill('0') << time->tm_mday;
  std::cout << "_";
  std::cout << std::setw(2) << std::setfill('0') << time->tm_hour;
  std::cout << std::setw(2) << std::setfill('0') << time->tm_min;
  std::cout << std::setw(2) << std::setfill('0') << time->tm_sec;
  std::cout << "] ";
}
