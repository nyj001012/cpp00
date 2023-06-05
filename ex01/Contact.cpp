/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:26:26 by yena              #+#    #+#             */
/*   Updated: 2023/06/05 12:52:22 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{

}

Contact::Contact(std::string firstName, std::string lastName,
				 std::string nickname, std::string phoneNumber,
				 std::string darkestSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickname;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

Contact::~Contact(void)
{

}

// Getter
std::string Contact::GetFirstName(void)
{
	return (this->firstName);
}

std::string Contact::GetLastName(void)
{
	return (this->lastName);
}

std::string Contact::GetNickname(void)
{
	return (this->nickname);
}

std::string Contact::GetPhoneNumber(void)
{
	return (this->phoneNumber);
}

std::string Contact::GetDarkestSecret(void)
{
	return (this->darkestSecret);
}

// Setter
void	Contact::SetFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void	Contact::SetLastName(std::string lastName)
{
	this->lastName = lastName;
}

void	Contact::SetNickname(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::SetPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void	Contact::SetDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}
