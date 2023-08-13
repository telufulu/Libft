NAME				=	libft.a
CC					=	cc
INC					=	.
CFLAGS				=	-Wall -Werror -Wextra -I $(INC)
SRCS				=	$(addprefix $(SRCS_DIR), $(SRCS_FILES))
SRCS_FILES			=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
						ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
						ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
						ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
						ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
						ft_atoi.c ft_calloc.c ft_strdup.c \
						ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
						ft_itoa.c
SRCS_DIR			=	srcs/
OBJS				=	$(addprefix $(OBJS_DIR), $(OBJS_FILES))
OBJS_FILES			=	$(SRCS_FILES:%.c=%.o)
OBJS_DIR			=	objs/

all:	$(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	[ -d $(OBJS_DIR) ] || mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS_DIR)
	find . -name "*.swap" -delete
	find . -name ".DS_Store" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

.SILENT: all $(NAME) $(OBJS) re clean fclean
.PHONY: all $(NAME) bonus $(OBJS_DIR) clean fclean re 
