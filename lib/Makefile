##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

NAME	=	libmy.a

CFLAGS	+=	-I ./include/ -Wextra -Wall

OBJ	=	$(SRC:.c=.o)

ARRC 	= 	ar rc

COPYH	= 	cp include/*.h ../include/

SRC	=	my_putchar.c		\
		my_putstr.c		\
		my_strcmp.c		\
		my_printf.c		\

all :	$(NAME)
$(NAME):	$(OBJ)
	$(ARRC) $(NAME) $(OBJ)
	ranlib $(NAME)
	$(COPYH)

fclean :	clean
	$(RM) $(NAME) *.o *~ \#*\#*

re :	fclean all

.PHONY:	all clean fclean re
