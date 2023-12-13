# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 10:13:50 by ychahbi           #+#    #+#              #
#    Updated: 2023/12/13 10:15:52 by ychahbi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SUBJ = violence
SRC  = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
CC= c++
FLAGS= -Wall -Wextra -Werror -std=c++98
RM= rm -f
OBJ_ALL = $(SRC:.cpp=.o)

all: $(SUBJ)

$(SUBJ): $(OBJ_ALL)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_ALL)

fclean: clean
	$(RM) $(SUBJ)

re: fclean all

.PHONY: clean fclean all re