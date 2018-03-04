CC =gcc
CFLAGS =-I.
INCLUDE =function.h
OBJECTS = main.o function.o

%.o: %.c $(INCLUDE)
	$(CC) -c -o $@ $< $(CFLAGS)

Dates: $(OBJECTS)
	$(CC) -o $@ $(OBJECTS) $(CFLAGS)

