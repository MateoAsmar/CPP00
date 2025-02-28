/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:45:16 by masmar            #+#    #+#             */
/*   Updated: 2025/02/05 21:29:58 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(): FirstName(""), LastName(""), Nickname(""), PhoneNumber(""), darkS("") {}
Contact::Contact(std::string fn, std::string ln,std::string nn, std::string pn,std::string ds) : FirstName(fn), LastName(ln), Nickname(nn), PhoneNumber(pn),darkS(ds)
{
}

std::string Contact:: getFirstName() const { return FirstName; }
std::string Contact:: getLastName() const { return LastName; }
std::string Contact:: getNickname() const { return Nickname; }
std::string Contact:: getPhoneNumber() const { return PhoneNumber; }
std::string Contact:: getDarkestSecret() const { return darkS; }
std::string Contact::truncate(const std::string& str) const
{
	/*
	if (str.length() > 10)
	{
	    return str.substr(0, 9) + ".";
	}
	return str;
	*/
	if(str.length() <= 10)
		return str;
	
	// Keep the maximum number of characters but preserve internal tabs/spaces
    size_t truncated_length = 10;

    // Ensure that no characters (spaces or tabs) are lost if they need to be preserved
    while (truncated_length > 0 && (str[truncated_length - 1] == ' ' || str[truncated_length - 1] == '\t')) {
        truncated_length--;
    }

    return str.substr(0, truncated_length ) + ".";
}

void Contact::Display(void)const
{
	std::cout << std::setw(10) << truncate(FirstName) << "|"
	  << std::setw(10) << truncate(LastName) << "|"
	  << std::setw(10) << truncate(Nickname) << "|";
}
