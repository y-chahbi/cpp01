/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Handel.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:55:20 by ychahbi           #+#    #+#             */
/*   Updated: 2023/11/21 17:22:49 by ychahbi          ###   ########.fr       */
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
    public:
        HandFile(std::string fn, std::string s1, std::string s2);
        void    showError(std::string error);
        void    doneRe();
        void    setContent(std::string cont);
        void    getContent();
        void    replace();
};

#endif