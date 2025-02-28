/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:45:12 by masmar            #+#    #+#             */
/*   Updated: 2025/02/05 21:38:02 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <stdexcept>
#include <limits>

void	generatorPrompt()
{
	std::cout << "Enter a Command:\n"
			  << "1.ADD\n"
			  << "2.SEARCH\n"
			  << "3.EXIT\n";
}

bool is_empty_or_whitespace(const std::string &str) {
    return str.find_first_not_of(" \t\n\r\f\v") == std::string::npos;
}

Contact ADD()
{
    std::string fn, ln, nn, pn, ds;

    std::cout << "Enter First Name: ";
    std::getline(std::cin >> std::skipws, fn);  // Skip whitespace at the beginning
    std::cout << "Enter Last Name: ";
    std::getline(std::cin, ln);
    std::cout << "Enter Nickname: ";
    std::getline(std::cin, nn);
    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, pn);
    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin, ds);

    // Check if any field is empty or consists only of whitespace or tabs
    if (is_empty_or_whitespace(fn) || is_empty_or_whitespace(ln) || is_empty_or_whitespace(nn) || 
        is_empty_or_whitespace(pn) || is_empty_or_whitespace(ds))
    {
        throw std::invalid_argument("No empty fields or fields with only whitespace are allowed! Addition Failed.");
    }

    return Contact(fn, ln, nn, pn, ds);
}


int askforIndex()
{
	int			index;

	while (true)
    {
        std::cout << "Enter the index of the contact for more info (0-7): ";
        std::cin >> index;

		if (std::cin.eof())
			return 0;
        else if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter an integer.\n";
        }
        else if (index >= 0 && index <= 7)
        {
            return index;
        }
        else
        {
            std::cout << "Invalid index. Please enter a number between 0 and 7.\n";
        }
    }
}

int main()
{
	std::string	input;
	PhoneBook	PB;
	int			added;
	int			index;
	int			count;

	count = 0;
	added = 0;
	while (1)
	{
		if (input != "SEARCH")
			generatorPrompt();
		std::getline(std::cin, input);
		if (std::cin.eof())
			return 0;
		if (input == "ADD")
		{
			try
			{
                Contact newContact = ADD();
                PB.addcontact(newContact);
                std::cout << "Contact added successfully!" << std::endl;
				count++;
				if (added == 0)
					added = 1;
            }
			catch (const std::invalid_argument& e)
			{
                std::cerr << e.what()<< std::endl;
            }
		}
		else if (input == "SEARCH")
		{
			if (added != 0)
			{
				PB.display();
				index = askforIndex();
				if (index < 0)
					std::cout << "You can only pick a number Between 0 and 7\n";
				else if (index > count - 1)
					std::cout << "No contact saved for this index!\n\n";
				else
					PB.displayone(index);
			}
			else
			{
				std::cout << "There are no contacts saved!\n\n";
				generatorPrompt();
			}
		}
		else if (input == "EXIT")
		{
			return (0);		
		}
		else
			std::cout << "Command Not Found" << std::endl;
	}
	return (0);
}
