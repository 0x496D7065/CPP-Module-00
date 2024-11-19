/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 09:20:59 by lpetit            #+#    #+#             */
/*   Updated: 2024/11/19 10:26:20 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    //std::cout << "Contact instance is created" << std::endl;
}

void    Contact::add(int currentIndex)
{
    std::string input;
    index = currentIndex + 1;

    while (true)
    {
        std::cout << "Enter firstname:" << std::endl;
        std::getline(std::cin, input);
        if (input.empty())
        {
            std::cout << "Input cannot be empty, please retry" << std::endl;
            continue ;
        }
        firstname = input;
        break;
    }
    while (true)
    {
        std::cout << "Enter lastname:" << std::endl;
        std::getline(std::cin, input);
        if (input.empty())
        {
            std::cout << "Input cannot be empty, please retry" << std::endl;
            continue ;
        }
        lastname = input;
        break;
    }
    while (true)
    {
        std::cout << "Enter nickname:" << std::endl;
        std::getline(std::cin, input);
        if (input.empty())
        {
            std::cout << "Input cannot be empty, please retry" << std::endl;
            continue ;
        }
        nickname = input;
        break;
    }
    while (true)
    {
        std::cout << "Enter phone number:" << std::endl;
        std::getline(std::cin, input);
        if (input.empty())
        {
            std::cout << "Input cannot be empty, please retry" << std::endl;
            continue ;
        }
        phonenumber = input;
        break;
    }
    while (true)
    {
        std::cout << "Enter darkest secret:" << std::endl;
        std::getline(std::cin, input);
        if (input.empty())
        {
            std::cout << "Input cannot be empty, please retry" << std::endl;
            continue ;
        }
        darkestsecret = input;
        break;
    }
}

void    Contact::display() const
{
    std::cout << std::setw(10) << std::right << index << "|"
              << std::setw(10) << std::right << (firstname.size() > 10 ? firstname.substr(0,9) + "." : firstname) << "|"
              << std::setw(10) << std::right << (lastname.size() > 10 ? lastname.substr(0,9) + "." : lastname) << "|"
              << std::setw(10) << std::right << (nickname.size() > 10 ? nickname.substr(0,9) + "." : nickname) << "|";
    std::cout << std:: endl;// << std::string(44, '-') << std::endl;
}

void    Contact::display_search() const
{
    std::cout << "firstname: " << firstname << std::endl
              << "lastname: " << lastname << std::endl
              << "nickname: " << nickname << std::endl
              << "phonenumber: " << phonenumber << std::endl
              << "darkestsecret: " << darkestsecret << std::endl;
}