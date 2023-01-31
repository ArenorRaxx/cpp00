# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 11:19:16 by nikoraxx          #+#    #+#              #
#    Updated: 2023/01/26 12:36:49 by nikoraxx         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	myphonebook

C++		=	c++
FLAGS	=	-Wall -Werror -Wextra
STD		=	-std=c++98

SRCDIR	=	./
OBJDIR	=	obj/

SRCNAME	=	\
			main.cpp
OBJNAME	=	$(SRCNAME:.cpp=.o)

SRCS	=	$(addprefix $(SRCDIR), $(SRCNAME))
OBJS	=	$(addprefix $(OBJDIR), $(OBJNAME))

all		:	$(OBJS)	$(NAME)

$(OBJS)	:	$(SRCS)	obj
			$(C++) $(FLAGS) $(STD) -c $< -o $@

obj		:
			@mkdir obj

$(NAME)	:	$(OBJS)
			$(C++) $(FLAGS) $(STD) -o $@ $(OBJS)

clean	:
			@echo "Cleaning..."
			@rm -rf $(OBJDIR)

fclean	:	clean
			@rm $(NAME)

re		:	fclean all