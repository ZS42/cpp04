# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/22 23:03:37 by zsyyida           #+#    #+#              #
#    Updated: 2023/10/24 09:17:19 by zsyyida          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal


CXX = c++
RM	= rm -rf

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 
#-fsanitize=address

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re .cpp.o
