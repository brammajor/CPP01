/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:32:59 by brmajor           #+#    #+#             */
/*   Updated: 2023/12/07 15:38:20 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    void    announce(void);
    void    setname(std::string name)
    {
        this->name = name;
    }
    Zombie();
    ~Zombie();
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );