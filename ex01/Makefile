# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/10 23:11:08 by ymafaman          #+#    #+#              #
#    Updated: 2024/09/10 23:25:04 by ymafaman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++

FLAGS = -Wall -Wextra -Werror

CPP_FILES = main.cpp

OBJ_FILES = $(CPP_FILES:.cpp=.o)

NAME = Iter

all : $(NAME)

$(NAME) : $(OBJ_FILES)
	$(CPP) $(FLAGS) $(OBJ_FILES) -o $(NAME)

%.o : %.cpp Iter.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ_FILES)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean