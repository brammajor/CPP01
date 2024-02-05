/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:54:25 by brmajor           #+#    #+#             */
/*   Updated: 2023/12/08 12:24:30 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];

	if (horde)
		std::cout << "Horde created." << std::endl;
	for (int i = 0; i < N; i++)
	{
		horde[i].setname(name);
		horde[i].announce();
	}
	return (horde);
}
