CC=gcc

SOURCES=\
		blocks.o\
		main.o\
		run.o \

EXEC=a.out

default: build

%.0: %.c
	$(CC) -c $< -o $@

build: ${SOURCES}
	gcc $(SOURCES) -o $(EXEC)

clean:
	-rm -rf $(SOURCES) $(EXEC)

run:
	./$(EXEC)