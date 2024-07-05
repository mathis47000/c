CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c action.c
OBJS = $(SRCS:.c=.o)
EXEC = main

all: $(EXEC) clean

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

cleanall: clean
	rm -f $(EXEC)

.PHONY: all clean cleanall