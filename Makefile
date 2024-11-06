NAME	= libftprintf.a
SRCS	= ft_printf.c\
    srcs/ft_print_char.c\
    srcs/ft_print_hex.c\
    srcs/ft_print_nbr.c\
    srcs/ft_print_pointer.c\
    srcs/ft_print_string.c\
    srcs/ft_print_unbr.c

OBJECTS	= $(SRCS:.c=.o)
INCS	= includes
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
AR = ar crs

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

all:	${NAME}

${NAME}: ${OBJECTS}
	$(AR) $@ $^

clean :
			rm -f ${OBJECTS}

fclean :	clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
