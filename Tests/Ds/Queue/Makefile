CFLAGS+= -Wall -pedantic -Werror -lcppwrappers -g 
LDFLAGS+=
EXEC=test
SOURCES=$(wildcard *.cpp)
OBJECTS=$(SOURCES:.cpp=.o)
CC=g++
SHAREFLAG+=-fPIC


tests:
	$(CC) $(SOURCES) $(CFLAGS) -o $(EXEC)


.PHONY: clean mrproper
clean:
	@rm $(OBJECTS)

mrproper:
	@rm $(EXEC)

