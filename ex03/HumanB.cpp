/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:07:17 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/13 15:08:48 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::setWeapon(Weapon &a)
{
    this->Wh = &a;
}

HumanB::HumanB(std::string name)
{
    this->name  = name;
    this->Wh    = NULL;
}

void    HumanB::attack()
{
    if (!Wh)
        exit(1);
    std::cout << name << " attacks with their " << Wh->getType() << std::endl;
}