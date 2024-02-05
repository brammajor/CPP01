/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 12:59:38 by brmajor           #+#    #+#             */
/*   Updated: 2023/12/08 15:41:17 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
private:
    std::string type;
public:
    Weapon();
    Weapon(std::string type);
    std::string getType() const;
    void    setType(std::string newtype);
};

#endif