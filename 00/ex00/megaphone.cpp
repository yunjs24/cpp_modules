/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsyun <junsyun@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 05:07:51 by junsyun           #+#    #+#             */
/*   Updated: 2022/11/23 05:14:47 by junsyun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <locale>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "Error" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::string str(av[i]);
			for (size_t j = 0 ; j < str.length(); j++)
				std::cout << (char)std::toupper(str[j]);
		}
		std::cout << std::endl;
	}
	return 0;
}
