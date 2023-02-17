# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nnabaeei <nnabaeei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 15:53:18 by nnabaeei          #+#    #+#              #
#    Updated: 2022/12/07 18:44:25 by nnabaeei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra  

cfiles = 	ft_printf.c \
			check_flag.c \
			check_type.c \
			write_diu.c \
			write_xp.c \
			write_sc.c \
			ft_putnbr.c \
			ft_putnbru.c \
			ft_putnbrxp.c \
			ft_putstr.c \
			ft_putchar.c \
#BONUS	= 	

OBJ = $(cfiles:.c=.o)

#OBJ_B = $(BONUS:.c=.o)

all: $(NAME) #bonus

%.o: cfiles #BONUS
	$(CC) $(CFLAGS) -c $@ -o $<

$(NAME) : $(OBJ)
	make -C libft
	ar rcs $(NAME) $^ ./libft/*.o

clean:
	rm -rf $(OBJ) $(OBJ_B)
	make fclean -C libft
	
fclean : clean
	rm -rf $(NAME)

re: fclean all
