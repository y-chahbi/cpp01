/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:59:41 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/19 16:48:18 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "The memory address: " << &str << std::endl;
    std::cout << "The memory address: " << stringPTR << std::endl;
    std::cout << "The memory address: " << &stringREF << std::endl;

    std::cout << "The value: " << str << std::endl;
    std::cout << "The value: " << *stringPTR << std::endl;
    std::cout << "The value: " << stringREF << std::endl;
}