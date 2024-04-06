
SRC = validation.c error.c

OBJ = validation.o error.o
GFLAGS = -Wall -Wextra -Werror 
NAME = so_long.a


all: $(NAME)

%.o: %.c
	@cc $(GFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@echo "making $(NAME)"
	@cc $(OBJ) -o $(NAME)

clean:
	@echo "cleaning.."
	@rm -f $(OBJ)
	

fclean: clean
	@echo "full cleaning.. "
	@rm -f $(NAME)

re: clean  
	rm -f $(OBJ)

.SILENT: re clean fclean 