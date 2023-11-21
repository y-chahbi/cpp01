/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:55:21 by ychahbi           #+#    #+#             */
/*   Updated: 2023/11/21 09:58:47 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    int N = 5;

    Zombie *hello = zombieHorde(N, "youssef");
    for (int i = 0; i < N; i++)
        hello[i].announce();    
    delete[] hello;
}