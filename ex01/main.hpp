/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:09:13 by yena              #+#    #+#             */
/*   Updated: 2023/06/05 12:12:58 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP00_MAIN_HPP
#define CPP00_MAIN_HPP

# include "PhoneBook.hpp"
# include <iostream>
# include <iomanip>
# include <string>

#define COLUMN_WIDTH 15
#define FIELD_WIDTH 10

void	AddContact(PhoneBook phonebook);
void	SearchContact(PhoneBook phonebook);
void	PrintContact(Contact contact);

#endif
