/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:08:58 by lpetit            #+#    #+#             */
/*   Updated: 2024/11/19 10:37:14 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    maxIndex = 0;
    currentIndex = 0;
    //std::cout << "PhoneBook instance created" << std::endl;
}

void    PhoneBook::addContact()
{
    if (currentIndex >= 8)
    {
        currentIndex = 0;
    }
    contact_array[currentIndex].add(currentIndex);
    currentIndex++;
    if (maxIndex < 8)
        maxIndex++;
}

void    PhoneBook::displayContact()
{
    std::cout << std::setw(10) << std::right << "index" << "|"
              << std::setw(10) << std::right << "firstname" << "|"
              << std::setw(10) << std::right << "lastname" << "|"
              << std::setw(10) << std::right << "nickname" << "|";
    std::cout << std::endl;
    for (int i = 0; i < maxIndex; i++)
        contact_array[i].display();
}

void    PhoneBook::searchIndex()
{
    std::string index_input;
    int index = 0;

    std::cout << "Enter a contact index" << std::endl;
    while (true)
    {
        std::getline(std::cin, index_input);
        std::istringstream stream(index_input);
        if (index_input.length() > 1)
            std::cout << "Invalid index, please enter a valid index" << std::endl;
        else if (stream >> index)
        {
            if (index >= 1 && index <= maxIndex)
                break ;
            else
                std::cout << "Invalid index, please enter a valid index" << std::endl;
        }
        else
            return ;
        //std::cout << "Invalid index, please enter a valid index" << std::endl;
    }
    contact_array[index - 1].display_search();
}