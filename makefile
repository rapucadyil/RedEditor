LIBS=-lsfml-graphics -lsfml-window -lsfml-system

all:
	g++ -c "main.cpp" -o main.o
	g++ -c "button.cpp" -o button.o

	g++ -std=c++17 -ggdb -Iinclude -o bin/red_editor main.o button.o $(LIBS)

clean:
	rm -f red_editor

install:
	cp red_editor /usr/bin

uninstall:
	rm red_editor