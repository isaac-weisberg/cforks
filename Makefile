CC=gcc

OBJECTS=\
		main.o\
		run.o\
		queue.o\

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