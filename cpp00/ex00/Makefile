# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/15 16:19:50 by amoukhle          #+#    #+#              #
#    Updated: 2023/10/17 09:36:46 by amoukhle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror -std=c++98
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = megaphone

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(FLAG) $(OBJS) -o $(NAME)

%.o : %.cpp
	c++ $(FLAG) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all