/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:48:34 by ychahbi           #+#    #+#             */
/*   Updated: 2023/11/20 15:09:48 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string);
    void announce( void );
    ~Zombie();
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );