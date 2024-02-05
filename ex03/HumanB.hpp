/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:12:04 by brmajor           #+#    #+#             */
/*   Updated: 2023/12/08 16:00:02 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANB_HPP
# define HUMANB_HPP

class HumanB
{
private:
    std::string name;
    Weapon      *weapon;
public:
    HumanB(std::string name);
    void    attack();
    void    setWeapon(Weapon &weapon);
};

#endif