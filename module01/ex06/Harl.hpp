/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:11:04 by achanek           #+#    #+#             */
/*   Updated: 2025/11/03 14:15:29 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>


class Harl{
    private :
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public :
        Harl();
        ~Harl();
        void complain(std::string level);
    
};



#endif