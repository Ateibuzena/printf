CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = ./src
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a
HEADER = printf.h

# Regla por defecto
all: $(NAME)

# Crear la librería estática
$(NAME): $(OBJS)
	ar rcs $@ $^

# Compilar archivos .c de src/ y añadir dependencia al .h
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar archivos objeto
clean:
	rm -f $(OBJS)

# Limpiar todo
fclean: clean
	rm -f $(NAME)

# Reconstruir desde cero
re: fclean all

.PHONY: all clean fclean re
