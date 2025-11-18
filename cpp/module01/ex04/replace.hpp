/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:42:39 by achanek           #+#    #+#             */
/*   Updated: 2025/11/18 15:44:41 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>


std::string readFile(std::string input_file);
std::string strReplace(std::string allstr, std::string s1, std::string s2);
void writeToFile(std::string output_file, std::string allstr_replaced);

#endif