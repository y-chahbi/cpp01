/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Handel.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:05:03 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/14 10:31:53 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Handel.hpp"

HandFile::HandFile(std::string fn, std::string s1, std::string s2)
{
    std::string     tmp;
    std::string     content;
    std::ifstream   read(fn);


    if (!read.is_open())
        showError("the file is not exsit or its unreadable!");
    else
    {
        while (std::getline(read, tmp))
            content = content + tmp + '\n';
        this->s1 = s1;
        this->s2 = s2;
        this->filename = fn;
    }
    read.close();
    this->theContent = content;
    replace();
    putTofile();
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
    std::cerr << Error << std::endl;
    exit(1);
}

void    HandFile::doneRe(void)
{
    std::cout << "The file just copied and replaced!" << std::endl;
}

void    HandFile::getContent(void)
{
    std::cout << theContent << std::endl;
}

void    HandFile::putTofile()
{
    this->NewFile = filename + ".replace";
    std::ofstream put(this->NewFile);
    if (!put.is_open())
        showError("The file Created from this program is having some problems!");
    put << theContent;
    put.close();
}