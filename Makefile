NAME = libftprintf.a
SRC_FILES = #*.c
OBJ_FILES = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))
RM = rm -f
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
OBJS_DIR = ./


$(NAME):	$(OBJ_FILES)
		$(AR) $(NAME) $(OBJ_FILES)

all:	$(NAME)
clean:	$(RM) $(OBJ_FILES)
fclean:	$(RM) $(NAME)
re:	fclean all
.PHONY: 	all clean fclean re