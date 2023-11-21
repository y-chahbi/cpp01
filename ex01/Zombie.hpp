/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:55:13 by ychahbi           #+#    #+#             */
/*   Updated: 2023/11/21 09:13:08 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        void    setName(std::string name);
        void    announce();
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );