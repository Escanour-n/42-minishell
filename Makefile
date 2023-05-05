# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nouakhro <nouakhro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 12:19:16 by nouakhro          #+#    #+#              #
#    Updated: 2023/05/05 18:47:15 by nouakhro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


ifeq ($(d),1)
	g = -fsanitize=address -g
endif

CC = cc

CCFLAGS = -Wall -Werror -Wextra $(g)

SRC = 	main.c\
		utils.c\
		free_all.c\
		check_rediraction.c\
		commande.c\
		parccen.c\
		echo_command.c\
		env_commd.c\
		export_command.c\
		unset_command.c\
		utils_export_command_1.c\
		utils_export_command_2.c\
		utils_export_command_3.c\
		pwd_command.c\
		builtins.c\
		pipe_and_rederaction.c\
		parceen.c

OBJE = $(SRC:.c=.o)

NAME = minishell
LIBFT = libft

all : $(NAME)

$(NAME) : $(OBJE)
	make -C $(LIBFT)
	$(CC) $(CCFLAGS) $(OBJE) libft/libft.a -lreadline -o $(NAME)

%.o : %.c
	$(CC) $(CCFLAGS) -c $<

clean :
	rm -f $(OBJE)
	make clean -C $(LIBFT)
fclean : clean
	make fclean -C $(LIBFT)
	rm -f $(NAME)
re:fclean $(NAME)

run : all
	mv $(OBJE) object && ./minishell