# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/10 05:44:03 by mel-bouh          #+#    #+#              #
#    Updated: 2024/12/10 06:57:15 by mel-bouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Flags = -Wall -Wextra -Werror
NAME = zombie
SRC = main.cpp zombieHorde.cpp Zombie.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(Flags) $(OBJ) -o $(NAME)

$(OBJ): $(SRC)
	c++ $(Flags) -c $(SRC)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
