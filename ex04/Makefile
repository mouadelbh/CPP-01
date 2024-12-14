# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 01:18:27 by mel-bouh          #+#    #+#              #
#    Updated: 2024/12/13 01:19:21 by mel-bouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Sed.cpp
OBJ = $(SRC:.cpp=.o)
NAME = replace
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)
$(OBJ): $(SRC)
	c++ $(FLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
