# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junsyun <junsyun@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 05:02:26 by junsyun           #+#    #+#              #
#    Updated: 2022/11/23 05:12:35 by junsyun          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	megaphone.cpp
OBJS	=	$(SRCS:.cpp=.o)

CXX		= clang++
RM		= rm -f
FLAGS	=	-Wall -Wextra -Werror -I,

NAME	=	megaphone

all:	$(NAME)

$(NAME):	$(OBJSD)
				$(CXX) $(FLAGS) -o $(NAME) $(OBJS)

clean:		clean
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re test