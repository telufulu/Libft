NAME				=	libft.a
CC					=	cc
INC					=	inc/
CFLAGS				=	-Wall -Werror -Wextra -I $(INC)
EXTRAFLAGS			=	-fsanitize=address -g3
SRCS				=	$(addprefix $(SRCS_DIR), $(SRCS_FILES))
SRCS_FILES			=	ft_isalpha.c ft_isdigit.c ft_isalnum.c
SRCS_DIR			=	srcs/
OBJS				=	$(addprefix $(OBJS_DIR), $(OBJS_FILES))
OBJS_FILES			=	$(SRCS_FILES:%.c=%.o)
OBJS_DIR			=	objs/

all:	$(NAME)

$(NAME): $(OBJS_DIR) $(OBJS)
	ar rcs $(NAME) $(OBJS)

#bonus: $(NAME) $(OBJS_BONUS)
#	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c | $(OBJS_DIR)
	$(CC) -c $(CFLAGS) $< -o $@
#	$(CC) $(CFLAGS) $(EXTRAFLAGS) -c $< -o $@

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
