GREEN='\033[0;32m'
RED='\033[1;31m'
BLUE='\033[0;34m'

SRC = chekcber.c gnl/get_next_line_utils.c gnl/get_next_line.c 
OBJS = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
NAME = so_long
LIBFT = libft.a

all: $(NAME)

$(NAME): $(OBJS) 
	@echo $(GREEN)"Making $(NAME)....."
	@cc $(OBJS)  -lmlx -framework OpenGL -framework AppKit -o $(NAME)

%.o: %.c
	@cc $(CFLAGS) -Imlx -c $< -o $@

$(LIBFT):
	@echo $(GREEN)"Making Libft"
	@make -C ./libft
	@mv ./libft/libft.a .

clean:
	@echo $(RED)"rm obj & lib 🚮"
	@rm -f $(OBJS) 
	@make -C ./libft clean

fclean: clean

	@echo $(RED)"rm obj & lib & NAME 🚮"
	@rm -f $(NAME)

re: fclean all