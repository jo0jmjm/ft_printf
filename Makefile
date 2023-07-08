.PHONY:re all clean fclean

SRCS = srcs/ft_printf.c \
	srcs/ft_printf_utils.c \
	srcs/ft_print_ptr.c \
	srcs/ft_print_unsigned.c \
	srcs/ft_print_hex.c

OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
CC = cc
# CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
LIBC = ar rcs

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} $@ $^

.c.o:
	${CC} -c $^ -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
