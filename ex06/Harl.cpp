/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:08:34 by ychahbi           #+#    #+#             */
/*   Updated: 2023/11/22 11:38:14 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void    Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. \nI really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. \nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. \nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    int     index = 0;
    int     dex;

    for (int *ind = &index; *ind < 4 && funIndex[*ind] != level; (*ind)++);
    
    dex = index;
    switch (index)
    {
        case 0:
            std::cout << " [ " << funIndex[dex++] << " ] " << std::endl;
            (this->*fun[0])();
            std::cout << std::endl;
        case 1:
            std::cout << " [ " << funIndex[dex++] << " ] " << std::endl;
            (this->*fun[1])();
            std::cout << std::endl;
        case 2:
            std::cout << " [ " << funIndex[dex++] << " ] " << std::endl;
            (this->*fun[2])();
            std::cout << std::endl;
        case 3:
            std::cout << " [ " << funIndex[dex++] << " ] " << std::endl;
            (this->*fun[3])();
            std::cout << std::endl;
    }
}

Harl::Harl()
{
    fun[0] = &Harl::debug;
    fun[1] = &Harl::info;
    fun[2] = &Harl::warning;
    fun[3] = &Harl::error;
    funIndex[0] = "Debug";
    funIndex[1] = "Info";
    funIndex[2] = "Warning";
    funIndex[3] = "Error";
}