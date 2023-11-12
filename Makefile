SRCS 		=		ft_isascii.c ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strdup.c ft_calloc.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_substr.c ft_strjoin.c ft_strtrim.c

NAME 		=		libft.a

OBJS		=		${SRCS:.c=.o}

BONUS		=

BONUS_OBJS	=

CFLAGS		=		-Wall -Wextra -Wall

.c.o		:
					cc ${CFLAGS} -c $< -o ${<:.c=.o}

all			:		${NAME}

$(NAME)		:		${OBJS}
						ar rcs ${NAME} ${OBJS}

clean		:
						rm -f ${OBJS} ${BONUS_OBJS}

fclean		:		clean
						rm -f ${NAME} ${BONUS_OBJS}

re			:		fclean all

bonus		:		${OBJS} ${BONUS_OBJS}
						ar rcs ${NAME} ${OBJS} ${BONUS_OBJS}

.PHONY		:		all BONUS clean fclean re
