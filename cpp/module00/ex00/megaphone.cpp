/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:17:54 by achanek           #+#    #+#             */
/*   Updated: 2025/11/08 14:48:53 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        for (int i = 1; i < argc; ++i)
        {
            for (int j = 0; argv[i][j] != '\0'; ++j)
            {
                std::cout << static_cast<char>(std::toupper(argv[i][j]));
            }
            if (i < argc - 1)
                std::cout << ' ';
        }
        std::cout << '\n';
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    return 0;
}
