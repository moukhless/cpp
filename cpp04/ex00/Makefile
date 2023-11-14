# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 15:15:07 by amoukhle          #+#    #+#              #
#    Updated: 2023/11/04 15:16:31 by amoukhle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Polymorphism
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp
OBJS = $(SRCS:.cpp=.o)
HERDERS = Animal.hpp Cat.hpp Dog.hpp

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp $(HERDERS)
	c++ $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -fr $(NAME)

re : fclean all

.PHONY : clean fclean re all