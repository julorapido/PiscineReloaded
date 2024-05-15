SRC = ft_display_file.c
NAME = ft_display_file
SRCS_OBJ = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

OUTPUT = ft_display_file.o

all: $(OUTPUT)
		${CC} ${CFLAGS} ft_display_file.o -o ${NAME}

ft_display_file.o: $(SRC)
		${CC} ${CFLAGS} -c $(SRC)

clean :
	rm -f *.o

fclean : clean
	rm -f ${NAME}

.PHONY : all clean fclean
