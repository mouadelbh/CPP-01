# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/11 23:58:19 by mel-bouh          #+#    #+#              #
#    Updated: 2024/12/11 23:59:07 by mel-bouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)
$(OBJ): $(SRC)
	c++ $(FLAGS) -c $(SRC) -o $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
