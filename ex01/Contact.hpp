/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:06:56 by yena              #+#    #+#             */
/*   Updated: 2023/06/05 14:49:32 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP00_CONTACT_H
#define CPP00_CONTACT_H

#include <iostream>

/**
 * @class Contact
 * @brief Contact class
 */
class Contact {
 private:
  std::string first_name;        ///< First name
  std::string last_name;        ///< Last name
  std::string nickname;        ///< Nickname
  std::string phone_number;    ///< Phone number
  std::string darkest_secret;    ///< Darkest secret

 public:
  Contact(void);
  Contact(std::string first_name, std::string last_name,
          std::string nickname, std::string phone_number,
          std::string darkest_secret);
  ~Contact(void);
  std::string GetFirstName(void);
  std::string GetLastName(void);
  std::string GetNickname(void);
  std::string GetPhoneNumber(void);
  std::string GetDarkestSecret(void);
  void SetFirstName(std::string first_name);
  void SetLastName(std::string last_name);
  void SetNickname(std::string nickname);
  void SetPhoneNumber(std::string phone_number);
  void SetDarkestSecret(std::string darkest_secret);
};

#endif
