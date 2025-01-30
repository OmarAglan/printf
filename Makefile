# Compiler and flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
INC = -I./include

# Directories
SRC_DIR = src
INC_DIR = include
LIB_DIR = lib
TEST_DIR = tests
OBJ_DIR = obj

# Source files
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Library name
LIB = libprintf.a

# Main program
MAIN = main

.PHONY: all clean fclean re test

all: $(OBJ_DIR) $(LIB)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(LIB): $(OBJ)
	ar rcs $(LIB_DIR)/$@ $(OBJ)

main: $(LIB)
	$(CC) $(CFLAGS) $(INC) main.c -L$(LIB_DIR) -lprintf -o $(MAIN)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(LIB_DIR)/$(LIB)
	rm -f $(MAIN)

re: fclean all

test: all
	$(CC) $(CFLAGS) $(INC) $(TEST_DIR)/*.c -L$(LIB_DIR) -lprintf -o test_printf
	./test_printf
