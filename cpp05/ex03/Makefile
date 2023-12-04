# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 10:43:37 by amoukhle          #+#    #+#              #
#    Updated: 2023/12/02 14:36:26 by amoukhle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Bureaucrat.cpp main.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
Name = Intern

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