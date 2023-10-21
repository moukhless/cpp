# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 15:58:49 by amoukhle          #+#    #+#              #
#    Updated: 2023/10/21 22:25:33 by amoukhle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = hiThisIsBrain

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	c++ $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean re all