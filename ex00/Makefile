# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpetit <lpetit@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/27 13:57:50 by lpetit            #+#    #+#              #
#    Updated: 2024/11/19 10:41:05 by lpetit           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

CC		= c++

SRCS 	= megaphone.cpp 

OBJS	= $(SRCS:.cpp=.o)

FLAGS	= -Wall -Wextra -Werror -std=c++98

#Colors:
GREEN		=	\e[92;5;118m
GRAY		=	\e[33;2;37m
CURSIVE		=	\e[33;3m
RESET		=	\e[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):	$(OBJS)
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

%.o: %.cpp
	$(CC) $(FLAGS) -c "$<" -o "$@"

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all