##
## EPITECH PROJECT, 2023
## makefile
## File description:
## pour my_printf
##

CC	=	gcc

SRC	=	src/flags/my_putchar.c					\
		src/flags/my_put_nbr.c					\
		src/flags/my_put_exa.c					\
		src/flags/my_put_examaj.c				\
		src/flags/percent_s.c					\
		src/flags/percent_di.c					\
		src/flags/percent_c.c					\
		src/flags/percent_percent.c				\
		src/flags/percent_x_e.c					\
		src/flags/percent_oct.c					\
		src/flags/percent_f.c					\
		src/flags/my_put_float.c				\
		src/flags/my_put_scientific_notation.c	\
		src/flags/display_output.c				\
		src/flags/my_put_long_int.c				\
		src/flags/percent_u.c					\
		src/flags/my_put_u.c					\
		src/flags/my_putstr.c					\
		src/flags/percent_g.c					\
		src/flags/my_notationgmaj.c				\
		src/manage_flags.c						\
		src/my_printf.c							\
		src/write_console.c						\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	-Wall -Wextra -iquote ./include

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f *#
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
