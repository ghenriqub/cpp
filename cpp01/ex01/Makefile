# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/11 17:05:28 by ghenriqu          #+#    #+#              #
#    Updated: 2026/01/11 18:15:38 by ghenriqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# program name
NAME = BraiiiiiiinnnzzzZ

SRC =	main.cpp \
		Zombie.cpp \
		NewZombie.cpp \
		RandomChump.cpp

HEADERS =	Zombie.hpp

# compiling flags:
CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDES = -I includes

# files and objects:
OBJ = $(SRC:.cpp=.o)

# rm files and objects
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[0;32mDone ✓\033[m"

clean:
	@$(RM) $(OBJ)
	@echo "\033[0;32mClean ✓\033[m"

%.o: %.cpp
	@$(CC) $(CPPFLAGS) $(INCLUDES) -c $< -o $@

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[0;32mFClean ✓\033[m"

re: fclean all

.PHONY: all clean fclean re
