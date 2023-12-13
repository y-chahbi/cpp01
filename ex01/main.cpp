/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:55:21 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/12 18:25:56 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    int N = 10000;

    Zombie *hello = zombieHorde(N, "youssef");
    for (int i = 0; i < N; i++)
        hello[i].announce();    
    delete [] hello;
}
