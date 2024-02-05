/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:07:16 by brmajor           #+#    #+#             */
/*   Updated: 2023/12/12 14:46:50 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Harl
{
private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
public:
    Harl();
    void    complain(std::string level);
};

typedef void (Harl::*t_func)();