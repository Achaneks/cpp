/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 20:41:05 by achanek           #+#    #+#             */
/*   Updated: 2025/11/18 15:43:24 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "replace.hpp"


int main (int ac ,char **av)
{
    if (ac != 4)
    {
        std::cout << "Usage : ./replace file_in string1 string2\n";
        return 1;
    }
    std::string input_file = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string output_file = input_file + ".replace";
    if (s1.empty())
    {
        std::cerr << "Error: string to replace (s1) must not be empty\n";
        return 1;
    }
    std::string allstr = readFile(input_file);
    std::string allstr_replaced = strReplace(allstr, s1, s2);
    writeToFile(output_file, allstr_replaced);
    return 0;
}
