# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/21 21:42:39 by amoukhle          #+#    #+#              #
#    Updated: 2023/10/21 22:25:59 by amoukhle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = harl2.0
SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp Harl.hpp
	c++ $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean clean

.PHONY : all clean fclean re