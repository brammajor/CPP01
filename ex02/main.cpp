/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 12:27:49 by brmajor           #+#    #+#             */
/*   Updated: 2023/12/08 12:41:36 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << &str <<std::endl;
	std::cout << stringPTR <<std::endl;
	std::cout << &stringREF <<std::endl;

	std::cout << str <<std::endl;
	std::cout << *stringPTR <<std::endl;
	std::cout << stringREF <<std::endl;
}
