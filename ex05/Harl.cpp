/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:07:34 by brmajor           #+#    #+#             */
/*   Updated: 2023/12/12 14:49:05 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

void    Harl::debug(void)
{
    std::cout << "Debug message" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "Info message" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "Warning message" << std::endl;
}

void    Harl::error(void)
{
    std::cout << "Error message" << std::endl;
}

void    Harl::complain(std::string lvl)
{
	std::string	lvls[] = {"debug", "info", "warning", "error"};
	t_func		fnct[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int			i = 0;

	while (i < 4)
	{
		if (!lvls[i].compare(lvl))
			break ;
		i++;
	}
	if (i < 4)
		(this->*fnct[i])();
}
