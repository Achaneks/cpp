/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:54:06 by achanek           #+#    #+#             */
/*   Updated: 2025/11/03 11:50:47 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug(void)
{
    std::cout   << "DEBUG : I love having extra bacon for my "
                << "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
                << std::endl;
}

void Harl::info(void)
{
    std::cout   << "INFO : I cannot believe adding extra bacon costs more money."
                << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
                << std::endl;  
}

void Harl::warning(void)
{
    std::cout   << "WARNGIN : I think I deserve to have some extra bacon for free."
                << "I’ve been coming for years, whereas you started working here just last month."
                << std::endl;
}

void Harl::error(void)
{
    std::cout   << "ERROR : This is unacceptable! I want to speak to the manager now."
                << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG","INFO","WARNGING","ERROR"};
    void (Harl::*funcs[4])() = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};  

    for (int i = 0;i < 4;i++)
    {
        if (level == levels[i])
        {
            (this->*funcs[i])();
            return;
        }
    }
}

