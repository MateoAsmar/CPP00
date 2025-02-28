/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 22:34:32 by masmar            #+#    #+#             */
/*   Updated: 2025/02/05 20:59:53 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::	PhoneBook() : next(0), capacity(8), count(0)
{}

void	PhoneBook::display(void)
{
	std::cout << std::setw(10) << "Index" << "  |"
                << std::setw(10) << "First Name" << "|"
                << std::setw(10) << "Last Name" << "|"
                << std::setw(10) << "Nickname" << "|" << "\n";
    for (int i = 0; i < count; ++i)
	{
        std::cout << std::setw(10) << "[" << i << "]" << "|";
        tab[i].Display();
        std::cout << "\n";
    }
}

void 	PhoneBook::displayone(int i)
{
	std::cout << "\n" << "Index: [" << i << "]" <<"\n" 
		  << "First Name: " << tab[i].getFirstName() << "\n"
		  << "Last Name: " << tab[i].getLastName() << "\n"
		  << "Nickname: " << tab[i].getNickname() << "\n"
		  << "Phone Number: " << tab[i].getPhoneNumber() << "\n"
		  <<  "Darkest Secret: " << tab[i].getDarkestSecret() << "\n\n";
}

void	PhoneBook::addcontact(Contact NewContact)
{
	tab[next] = NewContact;
	next = (next + 1) % capacity;
	if (count < 8)
	{
		count++;
	}
}
