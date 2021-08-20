# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lusargsy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/02 15:43:30 by lusargsy          #+#    #+#              #
#    Updated: 2021/02/03 18:35:10 by lusargsy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= $(shell find *.c)
OBJS		= ${SRCS:.c=.o}
NAME		= libft.a
CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror
AR			= ar csr

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME) : ${OBJS}
	${AR} ${NAME} ${OBJS}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re .c.o
