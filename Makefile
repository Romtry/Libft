# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rothiery <rothiery@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 09:50:21 by rothiery          #+#    #+#              #
#    Updated: 2024/05/08 17:22:47 by rothiery         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	libft.a

SRC= 	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c	ft_isprint.c	\
	ft_strlen.c	ft_memset.c	ft_bzero.c	ft_memcpy.c	ft_memmove.c	\
	ft_strlcpy.c	ft_strlcat.c	ft_toupper.c	ft_tolower.c	ft_strchr.c	\
	ft_strrchr.c	ft_strncmp.c	ft_memchr.c	ft_memcmp.c	ft_strnstr.c	\
	ft_atoi.c	ft_calloc.c	ft_strdup.c	ft_strjoin.c	ft_strtrim.c	\
	ft_split.c	ft_itoa.c	ft_strmapi.c	ft_striteri.c	ft_putchar_fd.c \
	ft_putstr_fd.c	ft_putendl_fd.c ft_putnbr_fd.c	ft_substr.c

SRCB=	ft_lstnew.c 	ft_lstadd_front.c ft_lstsize.c	ft_lstlast.c	ft_lstadd_back.c \
	ft_lstdelone.c	ft_lstclear.c	ft_lstiter.c	ft_lstmap.c

OFILES= ${SRC:.c=.o}
OFILESB=${SRCB:.c=.o}
OFILESALL=${OFILES} ${OFILESB}

${NAME}:${OFILES}
	ar rcs	${NAME} $?

bonus:	${OFILESALL}
	ar rcs	${NAME} $?

CC= 	cc
CFLAGS= -Wall -Wextra -Werror

%.o: %.c
	${CC} ${CFLAGS} -c $? -o $@

all:	${NAME}

clean:
	rm -f ${OFILESALL}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY:		all bonus clean fclean re
