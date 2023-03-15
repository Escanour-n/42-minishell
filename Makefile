# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 12:19:16 by nouakhro          #+#    #+#              #
#    Updated: 2023/03/15 11:10:02 by hdagdagu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CCFLAGS = -Wall -Werror -Wextra

SRC = main.c\
		utils.c\
		free_all.c\
		check_rediraction.c\
		commande.c \
		handle_echo.c \
		fix_arg.c \

OBJE = $(SRC:.c=.o)

NAME = minishell
LIBFT = libft

all : $(NAME)

$(NAME) : $(OBJE)
	@make -C $(LIBFT)
	@$(CC) $(CCFLAGS) $(OBJE) libft/libft.a -lreadline -o $(NAME)
	@make clean

%.o : %.c
	@$(CC) $(CCFLAGS) -c $<

clean :
	@rm -f $(OBJE)
	@make clean -C $(LIBFT)
fclean : clean
	@make fclean -C $(LIBFT)
	@rm -f $(NAME)
re:fclean $(NAME)