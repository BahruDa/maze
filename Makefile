## C/SDL2 Raycaster Makefile

# name compiler
CC = gcc

# Path all Source files
SRC = src/*.c

# Executable file
NAME = maze

# RM + flags
RM = rm -f

# Compiler flags
CFLAGS = -O2 -g -Wall -Werror -Wextra -pedantic -Ihds

# Linker flags
LFLAGS = -lSDL2 -lSDL2_image -lm

# SDL Flags
SDLFLAGS = `sdl2-config --cflags --libs`


# generates executable file
all: $(SRC)
	$(CC) $(SRC) $(CFLAGS) $(LFLAGS) -o $(NAME) $(SDLFLAGS)

# Cleaning to remove temporary files
clean:
	$(RM) *~ $(NAME)
