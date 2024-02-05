/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:13:22 by brmajor           #+#    #+#             */
/*   Updated: 2023/12/11 15:56:27 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Wrong number of arguments." << std::endl;
        return (1);
    }
    std::string outputFile = av[1];
    std::string inputFile = av[1];
    outputFile.append(".replace");
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream inFile(inputFile.c_str());
    std::ofstream outFile(outputFile.c_str());
    if (!inFile.is_open() || !outFile.is_open())
    {
        std::cerr << "Error opening file." << std::endl;
        return (1);
    }
    std::string line;
    while (std::getline(inFile, line))
    {
        if (line == s1)
        {
            outFile << s2;
        }
        else
        {
            outFile << line;
        }
        outFile << std::endl;
    }
    inFile.close();
    outFile.close();
    return (0);
}
