/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:44:21 by lpetit            #+#    #+#             */
/*   Updated: 2024/11/19 10:40:32 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
    public:
        Contact();
        
        void    add(int currentIndex);
        void    display() const;
        void    display_search() const;
    private:
        int index;
        std::string   firstname;
        std::string   lastname;
        std::string   nickname;
        std::string   phonenumber;
        std::string   darkestsecret;
};

#endif