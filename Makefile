# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llaurent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/04 11:15:39 by llaurent          #+#    #+#              #
#    Updated: 2019/11/06 13:36:44 by llaurent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PATH_SRCS = ./
PATH_HEADERS = ./
COMPILER_COMMAND = gcc
LIB_CREATOR_COMMAND = ar
RM_COMMAND = rm -f
FLAGS = -Wall -Wextra -Werror
OPTIONS = -I${PATH_HEADERS}
SRCS = ${PATH_SRCS}/ft_atoi.c ${PATH_SRCS}/ft_bzero.c ${PATH_SRCS}/ft_isalnum.c ${PATH_SRCS}/ft_isalpha.c\
 ${PATH_SRCS}/ft_isascii.c ${PATH_SRCS}/ft_isdigit.c ${PATH_SRCS}/ft_isprint.c ${PATH_SRCS}/ft_isprint.c\
 ${PATH_SRCS}/ft_itoa.c ${PATH_SRCS}/ft_memccpy.c ${PATH_SRCS}/ft_memchr.c ${PATH_SRCS}/ft_memcmp.c\
 ${PATH_SRCS}/ft_memcpy.c ${PATH_SRCS}/ft_memset.c ${PATH_SRCS}/ft_putchar.c ${PATH_SRCS}/ft_putchar_fd.c\
 ${PATH_SRCS}/ft_putendl.c ${PATH_SRCS}/ft_putnbr.c ${PATH_SRCS}/ft_putnbr_fd.c ${PATH_SRCS}/ft_putstr.c\
 ${PATH_SRCS}/ft_putstr_fd.c ${PATH_SRCS}/ft_strchr.c ${PATH_SRCS}/ft_strjoin.c ${PATH_SRCS}/ft_putendl_fd.c\
 ${PATH_SRCS}/ft_strcpy.c ${PATH_SRCS}/ft_strdel.c ${PATH_SRCS}/ft_strdup.c ${PATH_SRCS}/ft_strlcpy.c\
 ${PATH_SRCS}/ft_striter.c ${PATH_SRCS}/ft_striteri.c ${PATH_SRCS}/ft_strlcat.c\
 ${PATH_SRCS}/ft_strlen.c ${PATH_SRCS}/ft_strmap.c ${PATH_SRCS}/ft_strmapi.c ${PATH_SRCS}/ft_strncat.c\
 ${PATH_SRCS}/ft_strncmp.c ${PATH_SRCS}/ft_strnew.c ${PATH_SRCS}/ft_memmove.c\
 ${PATH_SRCS}/ft_strnstr.c ${PATH_SRCS}/ft_split.c ${PATH_SRCS}/ft_strrchr.c\
 ${PATH_SRCS}/ft_strnstr.c ${PATH_SRCS}/ft_substr.c ${PATH_SRCS}/ft_strtrim.c ${PATH_SRCS}/ft_tolower.c\
 ${PATH_SRCS}/ft_toupper.c ${PATH_SRCS}/ft_calloc.c
BONUS = ${PATH_SRCS}/ft_lstadd_front.c ${PATH_SRCS}/ft_lstlast.c ${PATH_SRCS}/ft_lstadd_back.c\
 ${PATH_SRCS}/ft_lstdelone.c ${PATH_SRCS}/ft_lstclear.c ${PATH_SRCS}/ft_lstiter.c ${PATH_SRCS}/ft_lstmap.c\
 ${PATH_SRCS}/ft_lstnew.c ${PATH_SRCS}/ft_lstsize.c
OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS:.c=.o}

all: ${NAME}

.c.o: ${OBJS} ${BONUS_OBJS}
	${COMPILER_COMMAND} ${OPTIONS} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	${LIB_CREATOR_COMMAND} rc ${NAME} ${OBJS}

clean:
	${RM_COMMAND} ${OBJS} ${BONUS_OBJS}

fclean: clean
	${RM_COMMAND} ${NAME}

re: fclean all

bonus: ${OBJS} ${BONUS_OBJS}
	${LIB_CREATOR_COMMAND} rc ${NAME} ${OBJS} ${BONUS_OBJS}