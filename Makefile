##
## EPITECH PROJECT, 2017
## make
## File description:
## file
##

CC	=	gcc

SRCS	=	src/main.c			\
		src/dir_car.c			\
		src/command.c			\
		src/ia.c			\
		src/get_next_line.c		\
		src/my_str_to_word_array.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-I./include

CFLAGS	+=	-W -Wall -pedantic

NAME	=	ai

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
		rm -f $(OBJS)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
