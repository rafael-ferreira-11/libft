NAME = libft.a

DOT_C=		ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
			ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
			ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
			ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
BONUS_C=	$(wildcard *_bonus.c)
OBJ=		$(DOT_C:.c=.o)
BONUS_OBJ=	$(BONUS_C:.c=.o)
CC = clang
FLAGS = -Wall -Wextra -Werror

RM = rm -rf

%.o :		%.c
	@$(CC) $(FLAGS) -c $< -o $@ 

all:		$(NAME)

$(NAME): 	$(OBJ)
	@ar -rv $(NAME) $(OBJ)
clean:
	@$(RM) $(OBJ) $(BONUS_OBJ)
fclean: 	clean
	@$(RM) $(NAME)
re:			fclean all
bonus:		$(OBJ) $(BONUS_OBJ)
	@ar -rv $(NAME) $(OBJ) $(BONUS_OBJ)
so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(DOT_C)
	gcc -nostartfiles -shared -o libft.so $(OBJ)
.PHONY:		all clean fclean re bonus