/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:59:08 by ychahbi           #+#    #+#             */
/*   Updated: 2023/11/21 11:30:34 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void    Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::Weapon()
{

}

Weapon::Weapon(std::string s1)
{
    this->type = s1;
}

std::string Weapon::getType() const
{
    return (type);
}