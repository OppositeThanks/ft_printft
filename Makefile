NAME = libftprintf.a
SRC_FILES = ft_printfnbr.c ft_printf.c ft_itoa.c ft_hex.c ft_printpercent.c \
ft_print_ptr.c ft_print_unsigned.c
OBJ_FILES = $(SRC_FILES:.c=.o)
RM = rm -f
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
%.o:%.c
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}


$(NAME):	$(OBJ_FILES)
		$(AR) $(NAME) $(OBJ_FILES)

all:	$(NAME)
clean:	
	$(RM) $(OBJ_FILES)
fclean:	clean
	$(RM) $(NAME)
re:	fclean all
.PHONY: 	all clean fclean re