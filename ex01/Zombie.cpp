/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:55:15 by ychahbi           #+#    #+#             */
/*   Updated: 2023/11/21 09:25:24 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << name << " Zombie had been created succefully" << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie::Zombie()
{
    
}

Zombie::~Zombie()
{
    std::cout << "Deleted!" << std::endl;
}