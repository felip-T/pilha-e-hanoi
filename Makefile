CC = g++
LD = g++

CFLAGS = -Wall
LDFLAGS = -Wall

OBJS = main.cpp hanoi.cpp 

TARGET = main

.cpp.o:
	$(CC) $(CFLAGS) -c $@

all: $(TARGET)

$(TARGET): $(OBJS)
	$(LD) $(OBJS) $(LDFLAGS) -o $@

clean:
	rm -f *.o $(TARGET)