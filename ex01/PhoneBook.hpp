/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:53:11 by masmar            #+#    #+#             */
/*   Updated: 2025/02/04 19:54:19 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact tab[8];
	int		next;
	int		capacity;
	int		count;

public:

	PhoneBook();
	void	addcontact(Contact NewContact);
	void	display(void);
	void	displayone(int i);
};
#endif
