/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:06:56 by yena              #+#    #+#             */
/*   Updated: 2023/05/31 14:52:06 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP00_CONTACT_H
#define CPP00_CONTACT_H

#include <iostream>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

	public:
		Contact(void);
		Contact(std::string first_name, std::string last_name,
				std::string nickname, std::string phone_number,
				std::string darkest_secret);
		~Contact(void);
};

Contact::Contact(void)
{

}

Contact::Contact(std::string first_name, std::string last_name,
				 std::string nickname, std::string phone_number,
				 std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
	std::cout << "Contact created" << std::endl;
}

Contact::~Contact(void)
{

}

#endif
