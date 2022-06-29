##
## EPITECH PROJECT, 2021
## InfinAdd
## File description:
## Makefile
##

CC			= 	gcc
CFLAGS		= 	-W -Wall -Wextra -Wno-function-declaration -g3
CPPFLAGS	= -I/usr/local/include
LDFLAGS		= -L/usr/local/lib -lcsfml-window -lcsfml-graphics

SRC 		=	src/need4stek.c \
				src/str_array.c \
				src/direction.c \


OBJ 		= 	src/need4stek.o \
				src/str_array.o \
				src/direction.o \

TARGET		= 	ai \

all: $(TARGET)

$(TARGET): $(OBJ)
	make -C ./lib/my
	$(CC) -o $(TARGET) $(OBJ) -L./lib/ -lmy $(LDFLAGS)

clean:
	rm -rf $(OBJ)
	make clean -C ./lib/my

fclean:clean
	rm -rf $(TARGET)
	rm -rf *.o

re:fclean all
