SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
		  srcs/ft_swap.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

GCC		= gcc
RM 		= rm -f
AR		= ar rc
HEADER	= includes

CFALGS	= -Wall -Wextra -Werror

.c.o:
			${GCC} ${CFLAGS} -c -I${HEADER} $< -o ${<:.c=.o}

 
${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
