NAME = libft.a

SRCS = $(wildcard *.c)

OBJ = ${SRCS:.c=.o}

INCLUDE = libft.h

FLAGS = -Wall -Wextra -Werror

CC = gcc

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME):	${OBJ}
	ar rc $(NAME) $(OBJ)

bonus:		${OBJ} 
	ar rc $(NAME) $(OBJ) 

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all
