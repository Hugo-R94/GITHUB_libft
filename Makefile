```CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft
ALLFILES = $(wildcard *.c)
OBJ_DIR = obj
OBJS = $(patsubst %.c, $(OBJ_DIR)/%.o, $(ALLFILES))

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
    mkdir -p $(OBJ_DIR)

$(NAME): $(OBJS)
    ar rcs $(NAME).a $(OBJS)

$(OBJ_DIR)/%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean re

clean:
    rm -rf $(OBJ_DIR)

fclean: clean
    rm -f $(NAME).a

re: fclean all