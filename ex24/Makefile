# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: beduroul <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/02 18:58:00 by beduroul     #+#   ##    ##    #+#        #
#    Updated: 2018/10/02 18:58:03 by beduroul    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

all : $(NAME)

$(NAME):
	ar rc $(NAME) $(SRC)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
