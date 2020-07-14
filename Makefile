##
## EPITECH PROJECT, 2019
## 105torus
## File description:
## Makefile
##

SRC	=	main.c		\
		usage.c		\
		this_is_number.c\
		newtons_method.c\
		first_file.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-g -g3 -ggdb -I ./include -lm -Wall -Werror -Wextra

NAME	=	105torus

all:		$(NAME) message

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f *~ $(NAME)

re:		fclean all

message:
		@echo "SUCCESSFULLY COMPILED!\n"
