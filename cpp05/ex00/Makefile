# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 10:43:37 by amoukhle          #+#    #+#              #
#    Updated: 2023/11/29 10:48:26 by amoukhle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Bureaucrat.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = Bureaucrat.hpp
Name = Bureaucrat

all : $(Name)

$(Name) : $(OBJS)
	$(C) $(OBJS) -o $@
%.o : %.cpp $(HEADER)
		$(C) $(FLAGS) -c $< -o $@
clean:
		rm -rf $(OBJS)
fclean: clean
		rm -rf $(Name)
re: fclean all

.PHONY: re fclean all clean