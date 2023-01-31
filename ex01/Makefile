# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 11:19:16 by nikoraxx          #+#    #+#              #
#    Updated: 2023/01/31 17:16:03 by mcorso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##		TEXT COLOR			##
C_RESET				:= \033[0m
C_PENDING			:= \033[0;36m
C_SUCCESS			:= \033[0;32m

##		TARGET EXEC			##
NAME	=	myphonebook

##		COMPIL FLAGS		##
C++		=	c++
FLAGS	=	-Wall -Werror -Wextra
STD		=	-std=c++98

##		DIRECTORY			##
INCDIR	=	includes
SRCDIR	=	srcs
OBJDIR	=	obj

##		SOURCES				##
INCFILES	=	Contact.hpp		\
				PhoneBook.hpp

SRCFILES	=	Contact.cpp		\
				PhoneBook.cpp

##		INCLUDE FILES		##
HEAD	=	$(INCFILES:%=$(INCDIR)/%)

##		SOURCE FILES		##
SRCS	=	$(SRCFILES:%=$(SRCDIR)/%)

##		OBJECT FILES		##
OBJS	=	$(SRCFILES:%.cpp=$(OBJDIR)/%.o)
OBJS	+=	$(OBJDIR)/main.o

#	#	#	RULES	#	#	#

all		:	$(NAME)

$(NAME)	:	$(HEAD) obj $(OBJS)
			@echo -n "--  "
			$(C++) $(FLAGS) $(STD) -o $@ $(OBJS)
			@echo "$(C_SUCCESS)🮱   Compilation done !$(C_RESET)"

obj		:
			@mkdir obj

$(OBJDIR)/main.o	:	main.cpp
			@echo -n "--  "
			$(C++) $(FLAGS) $(STD) -c $^ -o $@

$(OBJDIR)/%.o	:	$(SRCDIR)/%.cpp
			@echo -n "--  "
			$(C++) $(FLAGS) $(STD) -c $^ -o $@

clean	:
			@echo "$(C_PENDING)⌛  Cleaning sources...$(C_RESET)"
			@rm -rf $(OBJDIR)

fclean	:	clean
			@echo "$(C_PENDING)⌛  Cleaning executable...$(C_RESET)"
			@rm -rf $(NAME)

re		:	fclean all