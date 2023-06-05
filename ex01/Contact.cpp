/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:26:26 by yena              #+#    #+#             */
/*   Updated: 2023/06/05 14:50:05 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {

}

Contact::Contact(std::string first_name, std::string last_name,
                 std::string nickname, std::string phone_number,
                 std::string darkest_secret) {
  this->first_name = first_name;
  this->last_name = last_name;
  this->nickname = nickname;
  this->phone_number = phone_number;
  this->darkest_secret = darkest_secret;
}

Contact::~Contact(void) {

}

// Getter
std::string Contact::GetFirstName(void) {
  return (this->first_name);
}

std::string Contact::GetLastName(void) {
  return (this->last_name);
}

std::string Contact::GetNickname(void) {
  return (this->nickname);
}

std::string Contact::GetPhoneNumber(void) {
  return (this->phone_number);
}

std::string Contact::GetDarkestSecret(void) {
  return (this->darkest_secret);
}

// Setter
void Contact::SetFirstName(std::string first_name) {
  this->first_name = first_name;
}

void Contact::SetLastName(std::string last_name) {
  this->last_name = last_name;
}

void Contact::SetNickname(std::string nickname) {
  this->nickname = nickname;
}

void Contact::SetPhoneNumber(std::string phone_number) {
  this->phone_number = phone_number;
}

void Contact::SetDarkestSecret(std::string darkest_secret) {
  this->darkest_secret = darkest_secret;
}
