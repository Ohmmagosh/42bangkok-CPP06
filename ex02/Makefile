# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/13 23:38:29 by psuanpro          #+#    #+#              #
#    Updated: 2023/06/13 23:40:10 by psuanpro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=IdentifyRealType
CC=c++
CFLAGS=-Wall -Wextra -Werror

SRCS= main.cpp \
		Base.cpp

OBJS = ${SRCS:.cpp=.o}

BRED =\033[1;31m
BGRN =\033[1;32m
BYEL =\033[1;33m
RES = \033[0m

COMPILE = echo "$(BGRN)$(NAME) compiled....$(RES)"
CLEAN = echo "$(BYEL)$(NAME) clean....$(RES)"
FCLEAN = echo "$(BRED)$(NAME) fclean....$(RES)"

.cpp.o:
	@$(CC) -g $(CFLAGS) -c $< -o $@

all:$(NAME)

$(NAME): $(OBJS)
	@$(CC) -g $(CFLAGS) $(OBJS) -o $@
	@$(COMPILE)

clean:
	@rm -rf $(OBJS)
	@$(CLEAN)

fclean: clean
	@rm -rf $(NAME)
	@$(FCLEAN)

re: fclean all

.PHONY: all re clean fclean
