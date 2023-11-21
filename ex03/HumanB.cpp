/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:07:17 by ychahbi           #+#    #+#             */
/*   Updated: 2023/11/21 12:57:17 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::setWeapon(Weapon &a)
{
    this->Wh = &a;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void    HumanB::attack()
{
    std::cout << name << " attacks with their " << Wh->getType() << std::endl;
}