NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rsc
RM = rm -rf

CFILES = ft_check_type.c ft_print_char.c ft_print_hexa.c ft_print_p.c ft_print_base16_low.c ft_printf.c \
ft_print_nmbr.c ft_print_str.c ft_print_base16_up.c ft_print_nmbr_u.c

OBJ = $(CFILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all

.PHONY : clean