C = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Base.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = A.hpp B.hpp C.hpp Base.hpp
Name = daynamic_cast
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