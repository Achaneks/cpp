/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:42:00 by achanek           #+#    #+#             */
/*   Updated: 2025/11/18 15:43:44 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "replace.hpp"


std::string readFile(std::string input_file)
{
    std::ifstream ifs(input_file.c_str());
    if (!ifs.is_open())
    {
        std::cerr << "Error: could not open file '" << input_file << "' for reading\n";
        return std::string(); 
    }
    std::string result;
    std::string line;
    int f = 0;
    while (std::getline(ifs, line))
    {
        if (f)
            result += '\n';
        result += line;
        f = 1;
    }
    return result;
}

std::string strReplace(std::string allstr, std::string s1, std::string s2)
{
    std::string result;
    std::size_t pos = 0;
    std::size_t found;
    while ((found = allstr.find(s1, pos)) != std::string::npos)
    {
        result.append(allstr, pos, found - pos);
        result += s2;
        pos = found + s1.length();
    }
    if (pos <= allstr.length())
        result.append(allstr, pos, allstr.length() - pos);
    return result;
}

void writeToFile(std::string output_file, std::string allstr_replaced)
{
    std::ofstream ofs(output_file.c_str());
    if (!ofs.is_open())
    {
        std::cerr << "Error: could not open file '" << output_file << "' for writing\n";
        return;
    }
    ofs << allstr_replaced;
}