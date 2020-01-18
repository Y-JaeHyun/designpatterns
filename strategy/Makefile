CC=gcc
CFLAGS= -g -Wall -W
LDFLAGS=
LDLIBS=
OBJS = strategy.o character.o attackBehavior.o archer.o
TARGET=strategy

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

.c .o :
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o
	rm -f $(TARGET)
