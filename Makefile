CC = cc
SRC = chekcber.c
OBJS = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

NAME = so_long
LIBFT = libft.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@echo "Making $(NAME)....."
	@cc $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c
	@echo "so here youer files will compaling & the library"
	@$(CC) $(CFLAGS) -c $< -o $@
	$(CC) $(CFLAGS) -Imlx -c $< -o $@
	@echo if you see me that has done

$(LIBFT):
	@echo "Making Libft"
	@make -C libft
	@mv ./libft/libft.a .

clean:
	@rm -f $(OBJS) $(LIBFT)
	@make -C ./libft clean

fclean: clean
	rm -f $(NAME)

re: fclean all