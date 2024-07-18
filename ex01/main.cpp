/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:16:14 by lpetit            #+#    #+#             */
/*   Updated: 2024/07/18 18:15:07 by lpetit           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "PhoneBook.hpp"

int parsing_input(std::string &input, char tokens[1][7])
{
    std::istringstream stream(input);
    std::string        command;
    size_t MAX_LENGTH = 7;
    int MAX_TOKENS = 1;
    int numtoken = 0;

    while (stream >> command)
    {
        if (numtoken >= MAX_TOKENS)
        {
            std::cout << "Error, one command at a time" << std::endl;
            return (1);
        }
        if (command.length() >= MAX_LENGTH)
        {
            std::cout << "Error, command too long" << std::endl;
            return (1);
        }
        strncpy(tokens[0], command.c_str(), command.length());
        tokens[0][command.length()] = '\0';
        numtoken++;
    }
    if (numtoken == 0)
    {
        std::cout << "Please input command" << std::endl;
        return (1);
    }
    return (0);
}

void    handling_input(std::string command, PhoneBook &phoneBook)
{
    if (strcmp(command.c_str(), "ADD") == 0)
        phoneBook.addContact();
    else if (strcmp(command.c_str(), "SEARCH") == 0)
    {
        phoneBook.displayContact();
        phoneBook.searchIndex();
    }
    else if (strcmp(command.c_str(), "EXIT") == 0)
        exit(0);
}

int main()
{
    PhoneBook   phoneBook;
    std::string input;
    char    tokens[1][7];

    std::cout << "Enter command to begin: ADD, SEARCH or EXIT" << std::endl;
    while (std::getline(std::cin, input))
    {
        if (parsing_input(input, tokens) == 0)
        {
            handling_input(tokens[0], phoneBook);
        }
    }
    return (0);
}
