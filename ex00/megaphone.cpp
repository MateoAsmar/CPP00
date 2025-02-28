/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:53:29 by masmar            #+#    #+#             */
/*   Updated: 2025/01/28 11:47:10 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			std::cout << (char) std::toupper(argv[i][j]);
			j++;
		}
		i++;
	}
	std::cout <<std::endl;
	return (0);
}
