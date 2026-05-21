# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/21 16:58:13 by mtapiado          #+#    #+#              #
#    Updated: 2026/05/21 17:01:32 by mtapiado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Output
NAME = libft.a

# Fuentes
SRCS = $(wildcard *.c)
OBJ = $(SRCS:.c=.o)

HEADER = libft.h

# Compiler
CC = cc
CFLAGS = -Wall -Wextra -Werror
$(NAME) : $(OBJ)
		ar -rcs $(NAME) $(OBJ)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
