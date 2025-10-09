CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
INC = libft.h

SRCS =	ft_strlcpy.c \

OBJECTS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o:%.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJECTS)

fclean: clean;
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re