/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 10:50:29 by mcorso            #+#    #+#             */
/*   Updated: 2023/01/24 11:53:47 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	int	i = 1;

	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	while (argv[i] != NULL) {
		std::string current_string = argv[i];
		for (int j = 0; j < (int)current_string.length(); j++) {
			std::cout << (char)toupper(argv[i][j]);;
		}
		std::cout << " ";
		i++;
	}
	std::cout << "\n";
	return (0);
}