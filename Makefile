NAME				=	libft.a
CC					=	cc
CFLAGS				=	-Wall -Werror -Wextra -I $(INC)
EXTRAFLAGS			=	-fsanitize=address -g3
SRCS				=	$(addprefix $(SRCS_DIR), $(SRCS_FILES))
SRCS_BONUS			=	$(addprefix $(SRCS_DIR), $(SRCS_BONUS_FILES))
SRCS_FILES			=	
SRCS_BONUS_FILES	=	
SRCS_DIR			=	srcs/
INC					=	inc/
OBJS				=	$(addprefix $(OBJS_DIR), $(OBJS_FILES))
OBJS_BONUS			=	$(addprefix $(OBJS_DIR), $(OBJS_BONUS_FILES))
OBJS_FILES			=	$(SRCS_FILES:%.c=%.o)
OBJS_BONUS_FILES	=	$(SRCS_BONUS_FILES:%.c=%.o)
OBJS_DIR			=	$(SRCS_DIR)objs/

all:	$(NAME)

$(NAME): $(OBJS_DIR) $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(NAME) $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
#	$(CC) $(CFLAGS) $(EXTRAFLAGS) -c $< -o $@

$(OBJS_DIR):
		mkdir $(OBJS_DIR)

clean:
	rm -rf $(OBJS_DIR)
	find . -name "*.swap" -delete
	find . -name ".DS_Store" -delete

fclean: clean
	rm $(NAME)

re: fclean all

.SILENT: all $(NAME) $(OBJS_DIR) $(OBJS) re clean fclean
.PHONY: all $(NAME) bonus $(OBJS_DIR) clean fclean re 
