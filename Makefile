# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rothiery <rothiery@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 09:50:21 by rothiery          #+#    #+#              #
#    Updated: 2024/07/04 09:26:34 by rothiery         ###   ########.fr        #
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

NBR_TOT_FICHIER = 34

${NAME}:${OFILES}
	@ar rcs	${NAME} $?
	@echo "\n\n ${GRAS}${RED}libft EST COMPILÉ${RESET}"

bonus:	NBR_TOT_FICHIER = 43
bonus:	${OFILESALL}
	@${eval NBR_TOT_FICHIER = ${shell expr ${NBR_TOT_FICHIER} + 9}}
	@ar rcs	${NAME} $?
	@echo "\n\n ${GRAS}${RED}libft_bonus EST COMPILÉ${RESET}"

CC= 	cc
CFLAGS= -Wall -Wextra -Werror

RESET = \033[0m
GRAS = \033[1m
ITALIQUE = \033[3m
SOULIGN = \033[4m
UP = \033[A
BLINK = \033[6m

ORANGE = \033[38;5;216m
DARKBLUE = \033[38;5;21m
RED = \033[38;5;130m
DARK_RED = \033[38;5;88m
GREEN = \033[38;5;85m

FICH_COUNT = 0
NBR_COMPILER = ${shell expr 100 \* ${FICH_COUNT} / ${NBR_TOT_FICHIER}}
BAR =  ${shell expr 23 \* ${FICH_COUNT} / ${NBR_TOT_FICHIER}}
REST = ${shell expr 23 - ${BAR}}

all:	${NAME}

${MAIN_PATH}%.o:%.c .
	@${eval FICH_COUNT = ${shell expr ${FICH_COUNT} + 1}}
	@${CC} ${CFLAGS} -c -I . $< -o ${<:.c=.o}
	@echo " ${GRAS}${RED}-> COMPILATION EN COURS${RESET}${GRAS}${GREEN}${RESET}"
	@printf " ${RED}${GRAS}[${GREEN}%-.${BAR}s${DARK_RED}%-.${REST}s${RED}] [%d/%d (%d%%)] ${GREEN}$<  ✓                         ${DEF_COLOR}" "-----------------------" "-----------------------" ${FICH_COUNT} ${NBR_TOT_FICHIER} ${NBR_COMPILER}
	@echo "${UP}${UP}${UP}"
	@echo ""

clean:
	@rm -f ${OFILESALL}
	@echo "${ORANGE}${GRAS}\tNETTOYAGE${RESET}"
	@echo "${RED}${ITALIQUE} -les fichiers sont supprimés${RESET}"

fclean:	clean
	@rm -f ${NAME}
	@${RM} ${NAME}
	@echo "${RED}${ITALIQUE} -${NAME} est supprimê${RESET}"

re:	fclean all

re_b: fclean bonus

.PHONY:		all bonus clean fclean re
