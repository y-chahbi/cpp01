/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:55:21 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/13 14:44:30 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    int N = 10;

    Zombie *hello = zombieHorde(N, "youssef");
    for (int i = 0; i < N; i++)
        hello[i].announce();
    delete [] hello;
}
