/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:29:17 by brmajor           #+#    #+#             */
/*   Updated: 2023/12/07 17:16:18 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
    Zombie  *_newzombie;

    _newzombie = newZombie("Gerard");
    _newzombie->announce();
    randomChump("Walter");
    _newzombie->~Zombie();
    return (0);
}
