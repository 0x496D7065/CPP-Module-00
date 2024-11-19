/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:07:02 by lpetit            #+#    #+#             */
/*   Updated: 2024/11/19 10:41:12 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc != 1)
    {
        int i = 1;
        while (i < argc)
        {
            for (size_t w = 0; w < strlen(argv[i]); w++)
                argv[i][w] = toupper(argv[i][w]);
            std :: cout << argv[i];
            i++;
            if (i == argc)
                std :: cout << std :: endl;
        }
    }
    else
        std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    return (0);
}