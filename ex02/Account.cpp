/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:37:49 by yena              #+#    #+#             */
/*   Updated: 2023/06/06 15:30:24 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;

Account::Account(int initial_deposit) {
  _accountIndex = Account::_nbAccounts++;
  _amount = initial_deposit;
  std::cout << "index:" << _accountIndex << ";";
  std::cout << "amount:" << _amount << ";";
  std::cout << "created" << std::endl;
}

Account::~Account(void) {
  std::cout << "destructor called" << std::endl;
}

int Account::getNbAccounts(void) {
  return (Account::_nbAccounts);
}

int Account::getTotalAmount(void) {
  std::cout << "getTotalAmount called" << std::endl;
  return (1);
}

int Account::getNbDeposits(void) {
  std::cout << "getNbDeposits called" << std::endl;
  return (1);
}

int Account::getNbWithdrawals(void) {
  std::cout << "getNbWithdrawals called" << std::endl;
  return (1);
}

int getNbWithdrawals(void) {
  std::cout << "getNbWithdrawals called" << std::endl;
  return (1);
}

void Account::displayAccountsInfos(void) {
  std::cout << "displayAccountsInfos called" << std::endl;
}

void Account::makeDeposit(int deposit) {
  std::cout << "makeDeposit called" << std::endl;
  (void) deposit;
}

bool Account::makeWithdrawal(int withdrawal) {
  std::cout << "makeWithdrawal called" << std::endl;
  (void) withdrawal;
  return (true);
}

int Account::checkAmount(void) const {
  std::cout << "checkAmount called" << std::endl;
  return (1);
}

void Account::displayStatus(void) const {
  std::cout << "displayStatus called" << std::endl;
}
