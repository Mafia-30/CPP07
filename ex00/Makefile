# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/10 22:44:37 by ymafaman          #+#    #+#              #
#    Updated: 2024/09/10 23:02:41 by ymafaman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++

FLAGS = -Wall -Wextra -Werror

CPP_FILES = main.cpp

OBJ_FILES = $(CPP_FILES:.cpp=.o)

NAME = Exec

all : $(NAME)

$(NAME) : $(OBJ_FILES)
	$(CPP) $(FLAGS) $(OBJ_FILES) -o $(NAME)

%.o : %.cpp Swap.hpp Min.hpp Max.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ_FILES)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean