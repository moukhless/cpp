# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 21:06:31 by amoukhle          #+#    #+#              #
#    Updated: 2023/10/29 22:16:27 by amoukhle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = fixed

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp Fixed.hpp
	c++ $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean re all
