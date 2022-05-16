NAME = libft.a

SRC = ft_isalpha.c			\
	  ft_isdigit.c			\
	  ft_isalnum.c			\
	  ft_isascii.c			\
	  ft_isprint.c			\
	  ft_strlen.c			\
	  ft_strlcpy.c			\
	  ft_strlcat.c			\
	  ft_strncmp.c			\
	  ft_memchr.c			\
	  ft_toupper.c			\
	  ft_tolower.c			\
	  ft_strnstr.c			\
	  ft_atoi.c				\
	  ft_strchr.c			\
	  ft_strrchr.c			\
	  ft_memset.c			\
	  ft_bzero.c			\
	  ft_memcmp.c			\
	  ft_memcpy.c			\
	  ft_memmove.c			\
	  ft_calloc.c			\
	  ft_strdup.c			\
	  ft_substr.c			\
	  ft_strjoin.c			\
	  ft_split.c 			\
	  ft_itoa.c				\
	  ft_strtrim.c			\
	  ft_putchar_fd.c		\
	  ft_putstr_fd.c		\
	  ft_putendl_fd.c		\
	  ft_putnbr_fd.c		\
	  ft_strmapi.c			\
	  ft_striteri.c	\

SRC_BONUS = ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c \
			
OBJ_BONUS = $(SRC_BONUS:.c=.o)
OBJ = $(SRC:.c=.o)

CC = gcc
AR = ar csr
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(OBJ): %.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(AR) $(NAME) $^

$(OBJ_BONUS) : %.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ_BONUS) $(OBJ)
	$(AR) $(NAME) $^

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus