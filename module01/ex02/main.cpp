/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 22:36:10 by achanek           #+#    #+#             */
/*   Updated: 2025/11/15 15:02:56 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Memory address of str:      " << &str << std::endl;
    std::cout << "Memory address held by PTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by REF: " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "Value of str:               " << str << std::endl;
    std::cout << "Value pointed by PTR:       " << *stringPTR << std::endl;
    std::cout << "Value pointed by REF:       " << stringREF << std::endl;
    
    return 0;
}
