NAME = push_swap

CHECKER = checker

SRC = $(wildcard *.c)

SRCB = $(wildcard bonus/*.c)

LIBFT_PATH = Libft

HEADER = $(wildcard *.h)

HEADERB = $(wildcard bonus/*.h)

HEADERGNL = get_next_line.h

OBJ = $(SRC:.c=.o)

OBJB = $(SRCB:.c=.o)

SRCLIBFT = $(wildcard Libft/*.C)

FLAGS = -Wall -Wextra -Werror #-fsanitize=address

all: $(NAME)
$(NAME): $(OBJ)
	@${MAKE} -C Libft
	@cc $(FLAGS) $(OBJ) Libft/libft.a -o $(NAME)

allb: $(CHECKER)
$(CHECKER): $(OBJB)
	@${MAKE} -C Libft
	@cc $(FLAGS) $(OBJB) Libft/libft.a -o $(CHECKER)

%.o:%.c
	@cc $(FLAGS) -c $< -o $@

clean:
	@${MAKE} -C Libft fclean
	@rm -rf *.o bonus/*.o

bonus: $(CHECKER) allb

fclean: clean
	@rm -rf $(NAME) 

re: fclean $(NAME) 

rb: fclean bonus

.PHONY: all allb clean fclean bonus rb