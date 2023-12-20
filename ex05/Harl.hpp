/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:08:32 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/20 10:02:55 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
    private:
        void        debug( void );
        void        info( void );
        void        warning( void );
        void        error( void );
        void        (Harl::*fun[4])(void);
    public:
        Harl();
        void        complain( std::string level );
        std::string funIndex[4];
};


#endif