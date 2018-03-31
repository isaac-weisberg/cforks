CC=gcc

OBJECTS=\
		blocks.o\
		main.o\
		run.o \

EXEC=a.out

default: build

%.0: %.c
	$(CC) -c $< -o $@

build: ${OBJECTS}
	gcc $(OBJECTS) -o $(EXEC)

clean:
	-rm -rf $(OBJECTS) $(EXEC)

run:
	./$(EXEC)