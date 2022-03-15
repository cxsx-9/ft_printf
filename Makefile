# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csantivi <csantivi@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 18:49:59 by csantivi          #+#    #+#              #
#    Updated: 2022/03/15 10:11:01 by csantivi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra
CC = gcc
AR = ar -crs
RM = rm -rf
SRCS = ft_printf.c \
	ft_utility.c \
	ft_utility_base.c \

OBJS = $(SRCS:.c=.o)

%o: %c
	$(CC) $(FLAGS) -Ilibft -c $< -o $@

$(NAME): $(OBJS)
	make -C libft
	cp libft/libft.a .
	mv libft.a $(NAME)
	$(AR) ${NAME} $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)
	make clean -C libft

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re