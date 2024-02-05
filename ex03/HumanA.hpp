/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:07:23 by brmajor           #+#    #+#             */
/*   Updated: 2023/12/08 15:36:23 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANA_HPP
# define HUMANA_HPP

class HumanA
{
private:
    std::string name;
    Weapon      &weapon;
public:
    HumanA(std::string name, Weapon &weapon);
    void    attack();
};

#endif