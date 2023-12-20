/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:08:34 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/20 10:44:59 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void    Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    for (int i = 0; i < 4; i++)
    {
        while (funIndex[i] == level)
            (this->*fun[i++])();
    }
}

Harl::Harl()
{
    fun[0] = &Harl::debug;
    fun[1] = &Harl::info;
    fun[2] = &Harl::warning;
    fun[3] = &Harl::error;
    funIndex[0] = "DEBUG";
    funIndex[1] = "INFO";
    funIndex[2] = "WARNING";
    funIndex[3] = "ERROR";
}