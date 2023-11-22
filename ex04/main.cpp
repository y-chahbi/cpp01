/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:51:26 by ychahbi           #+#    #+#             */
/*   Updated: 2023/11/21 17:47:49 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Handel.hpp"


int main(int ac, char **av)
{
    if (ac == 4)
    {
        HandFile    file(av[1], av[2], av[3]);
        file.getContent();
    }
    else
        std::cout << "Args Error!" << std::endl;
}