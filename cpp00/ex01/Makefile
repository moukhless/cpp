# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 20:19:05 by amoukhle          #+#    #+#              #
#    Updated: 2023/10/17 10:41:12 by amoukhle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAG = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp save_contacts.cpp functions_supp.cpp display_functions.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = PhoneBook

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(FLAG) $(OBJS) -o $(NAME)

%.o : %.cpp Contact.hpp PhoneBook.hpp
	c++ $(FLAG) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all