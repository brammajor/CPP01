/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:12:55 by brmajor           #+#    #+#             */
/*   Updated: 2023/12/08 15:36:58 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

std::string Weapon::getType() const
{
    return (this->type);
}

void    Weapon::setType(std::string newtype)
{
    this->type = newtype;
}