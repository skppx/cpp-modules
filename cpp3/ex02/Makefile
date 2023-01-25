NAME	=	ClapTrap
SRCS	=	ClapTrap.cpp\
			ScavTrap.cpp\
			main.cpp\

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -g3 -std=c++98
OBJS	=	$(SRCS:.cpp=.o)

%.o:		%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re
