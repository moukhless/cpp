C = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = 
OBJS = $(SRCS:.cpp=.o)
HEADER = 
Name = a.out
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