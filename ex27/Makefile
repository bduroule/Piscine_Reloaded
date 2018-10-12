# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: beduroul <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/02 19:15:16 by beduroul     #+#   ##    ##    #+#        #
#    Updated: 2018/10/02 19:15:20 by beduroul    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = ft_display_file

FLAG = -Werror -Wall -Wextra

SRCS = ft_display_file.c

all : $(NAME)

$(NAME):
	gcc $(FLAG) $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
