/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:00:21 by brmajor           #+#    #+#             */
/*   Updated: 2023/12/12 14:47:50 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl    Harl;

    Harl.complain("debug");
    Harl.complain("info");
    Harl.complain("warning");
    Harl.complain("error");
    Harl.complain("test");
}