/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:07:15 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/13 10:37:07 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& a) : Wh(a), name(name) {}

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << Wh.getType() << std::endl;
}