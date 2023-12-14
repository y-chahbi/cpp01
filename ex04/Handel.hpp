/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Handel.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:55:20 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/14 10:01:26 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDEL_HPP
#define HANDEL_HPP

#include <iostream>
#include <fstream>

class HandFile
{
    private:
        std::string filename;
        std::string s1;
        std::string s2;
        std::string theContent;
        std::string NewFile;
    public:
        HandFile(std::string fn, std::string s1, std::string s2);
        void    showError(std::string error);
        void    doneRe();
        void    getContent();
        void    replace();
        void    putTofile();
};

#endif