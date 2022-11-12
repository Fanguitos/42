# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eportela <eportela@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 10:43:35 by eportela          #+#    #+#              #
#    Updated: 2022/11/12 11:12:13 by eportela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = ./libft/libft.a

N_TEMP = temp.a

NAME = libftprintf.a

SRCS =	ft_printf.c \
		source/ft_fixpointer.c \
		source/ft_format.c \
		source/ft_printchar.c \
		source/ft_printhexadecimal.c \
		source/ft_printinteger.c \
		source/ft_printpercent.c \
		source/ft_printpointer.c \
		source/ft_printstring.c 
		
SURPL_O =	ft_printf.o \
		source/ft_fixpointer.o \
		source/ft_format.o \
		source/ft_printchar.o \
		source/ft_printhexadecimal.o \
		source/ft_printinteger.o \
		source/ft_printpercent.o \
		source/ft_printpointer.o \
		source/ft_printstring.o  

CC = cc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) bonus -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
