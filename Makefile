NAME = libft.a

DOT_C=		srcs/ft_atoi.c srcs/ft_bzero.c srcs/ft_calloc.c srcs/ft_isalnum.c \
			srcs/ft_isalpha.c srcs/ft_isascii.c srcs/ft_isdigit.c \
			srcs/ft_isprint.c srcs/ft_itoa.c srcs/ft_memchr.c srcs/ft_memcmp.c \
			srcs/ft_memcpy.c srcs/ft_memmove.c srcs/ft_memset.c \
			srcs/ft_putchar_fd.c srcs/ft_putendl_fd.c srcs/ft_putnbr_fd.c \
			srcs/ft_putstr_fd.c srcs/ft_split.c srcs/ft_strchr.c srcs/ft_strdup.c \
			srcs/ft_striteri.c srcs/ft_strjoin.c srcs/ft_strlcat.c \
			srcs/ft_strlcpy.c srcs/ft_strlen.c srcs/ft_strmapi.c \
			srcs/ft_strncmp.c srcs/ft_strnstr.c srcs/ft_strrchr.c \
			srcs/ft_strtrim.c srcs/ft_substr.c srcs/ft_tolower.c \
			srcs/ft_toupper.c
BONUS_C=	srcs/ft_lstadd_back.c   srcs/ft_lstdelone.c  srcs/ft_lstmap.c \
			srcs/ft_lstadd_front.c  srcs/ft_lstiter.c    srcs/ft_lstnew.c \
			srcs/ft_lstclear.c      srcs/ft_lstlast.c    srcs/ft_lstsize.c 
OBJ=		$(DOT_C:.c=.o)
BONUS_OBJ=	$(BONUS_C:.c=.o)
CC = clang
FLAGS = -Wall -Wextra -Werror

RM = rm -rf

all:		$(NAME)

$(NAME): 	$(OBJ)
	@ar -r $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ) $(BONUS_OBJ)

fclean: 	clean
	@$(RM) $(NAME)

re:			fclean all

bonus:		$(OBJ) $(BONUS_OBJ)
	@ar -r $(NAME) $(OBJ) $(BONUS_OBJ)

.c.o:
	@$(CC) $(FLAGS) -c $< -o $@
	
.PHONY:		all clean fclean re bonus
