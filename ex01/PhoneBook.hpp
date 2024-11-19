/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:44:49 by lpetit            #+#    #+#             */
/*   Updated: 2024/11/19 10:40:48 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <cstring>
#include <sstream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
    public:
        PhoneBook();

        void    addContact();
        void    displayContact();
        void    searchIndex();
    private:
        int currentIndex;
        int maxIndex;
        Contact contact_array[8];
};

#endif