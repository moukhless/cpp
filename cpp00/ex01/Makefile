# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 20:19:05 by amoukhle          #+#    #+#              #
#    Updated: 2023/10/19 16:15:37 by amoukhle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror -std=c++98
SRCS = Main.cpp SaveContacts.cpp FunctionsSupp.cpp DisplayFunctions.cpp SetterGetter.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = PhoneBook

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(FLAG) $(OBJS) -o $(NAME)

%.o : %.cpp Contact.hpp PhoneBook.hpp FunProto.h
	c++ $(FLAG) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean re all