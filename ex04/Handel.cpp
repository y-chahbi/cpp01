/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Handel.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:05:03 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/13 11:42:45 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Handel.hpp"

HandFile::HandFile(std::string fn, std::string s1, std::string s2)
{
    std::string     tmp;
    std::string     content;
    std::ifstream   inputFile(fn);


    if (!inputFile.is_open())
        showError("the file is not exsit or its unreadable!");
    else
    {
        while (std::getline(inputFile, tmp))
            content = content + tmp + '\n';
        this->s1 = s1;
        this->s2 = s2;
    }
    setContent(content);
    replace();
}

void    HandFile::replace(void)
{
    size_t  tmp = std::string::npos;
    int     sl = s1.length();

    while (theContent.find(s1) != std::string::npos && theContent.find(s1) != tmp)
    {
        tmp = theContent.find(s1);
        theContent.erase(tmp, sl);
        theContent.insert(tmp, s2);
    }
}

void    HandFile::showError(std::string Error)
{
    std::cout << Error << std::endl;
    exit(1);
}

void    HandFile::doneRe(void)
{
    std::cout << "The file just copied and replaced!" << std::endl;
}

void    HandFile::setContent(std::string cont)
{
    this->theContent = cont;
}

void    HandFile::getContent(void)
{
    std::cout << theContent << std::endl;
}