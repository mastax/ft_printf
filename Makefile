SRCS	=	ft_format.c ft_printf.c ft_put_char.c ft_put_hexa.c ft_put_p.c \
			ft_put_s.c ft_put_nbr.c

OBJS	=	$(SRCS:.c=.o)

CC 		=	cc
RM 		=	rm -f 
CFLAGS 	=	-Wall -Wextra -Werror

NAME 	=	libftprintf.a

all:	$(NAME)

$(NAME):	$(OBJS)
	ar -rc $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)