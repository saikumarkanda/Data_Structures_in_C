CC=gcc

CFLAGS= -Wall

TARGET=singly-linked-list

SRCS=main.c singly_LL.c

OBJS=$(SRCS: .c=.o)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	rm -f *.o
	rm -f $(TARGET)
