# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 11:19:16 by nikoraxx          #+#    #+#              #
#    Updated: 2023/01/31 16:03:11 by mcorso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

C++		=	c++
FLAGS	=	-Wall -Werror -Wextra
STD		=	-std=c++98

SRCDIR	=	.
OBJDIR	=	obj

SRCS	=	\
			main.cpp

OBJS	=	$(SRCS:%.cpp=$(OBJDIR)/%.o)

all		:	$(NAME)

$(NAME)	:	obj $(OBJS)
			$(C++) $(FLAGS) $(STD) -o $@ $(OBJS)

$(OBJS)	:	$(SRCS)
			$(C++) $(FLAGS) $(STD) -c $< -o $@

obj		:
			@mkdir obj


clean	:
			@echo "Cleaning..."
			@rm -rf $(OBJDIR)

fclean	:	clean
			@rm -rf $(NAME)

re		:	fclean all
