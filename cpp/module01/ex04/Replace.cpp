/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 20:41:10 by achanek           #+#    #+#             */
/*   Updated: 2025/11/02 22:14:33 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Replace.hpp"

std::string replaceAll(const std::string &text, const std::string &s1, const std::string &s2) {
    if (s1.empty()) return text;
    std::string result;
    std::string::size_type pos = 0;
    std::string::size_type found;

    while ((found = text.find(s1, pos)) != std::string::npos) {
        result.append(text, pos, found - pos);
        result.append(s2);
        pos = found + s1.length();
    }

    result.append(text, pos, text.length() - pos);
    return result;
}
