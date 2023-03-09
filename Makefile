# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nouakhro <nouakhro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 12:19:16 by nouakhro          #+#    #+#              #
#    Updated: 2023/03/09 14:23:25 by nouakhro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CCFLAGS = -Wall -Werror -Wextra

SRC = main.c\
		utils.c\
		free_all.c\
		check_rediraction.c\
		commande.c

OBJE = $(SRC:.c=.o)

NAME = mini

all : $(NAME)

$(NAME) : $(OBJE)
	$(CC) $(CCFLAGS) $(OBJE) libft/libft.a -lreadline -o $(NAME)

%.o : %.c
	$(CC) $(CCFLAGS) -c $<

clean :
	rm -f $(OBJE)
fclean : clean
	rm -f $(NAME)
re:fclean $(NAME)