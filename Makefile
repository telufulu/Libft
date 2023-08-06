NAME				=	libft.a
CC					=	cc
INC					=	inc/
CFLAGS				=	-Wall -Werror -Wextra -I $(INC)
SRCS				=	$(addprefix $(SRCS_DIR), $(SRCS_FILES))
SRCS_FILES			=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
						ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
						ft_memcpy.c ft_memmove.c ft_strlcpy.c
SRCS_DIR			=	srcs/
OBJS				=	$(addprefix $(OBJS_DIR), $(OBJS_FILES))
OBJS_FILES			=	$(SRCS_FILES:%.c=%.o)
OBJS_DIR			=	objs/

all:	$(NAME)

$(NAME): $(OBJS_DIR) $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c | $(OBJS_DIR)
	$(CC) -c $(CFLAGS) $< -o $@

$(OBJS_DIR):
		mkdir $(OBJS_DIR)

clean:
	rm -rf $(OBJS_DIR)
	find . -name "*.swap" -delete
	find . -name ".DS_Store" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

.SILENT: all $(NAME) $(OBJS_DIR) $(OBJS) re clean fclean
.PHONY: all $(NAME) bonus $(OBJS_DIR) clean fclean re 
