
output: main.o Character.o Menu.o
	g++ main.cpp Character.cpp Menu.cpp -o output

main.o: main.cpp
	g++ -c main.cpp

Character.o: Character.hpp Character.cpp
	g++ -c Character.cpp

Menu.o: Menu.hpp Menu.cpp
	g++ -c Menu.cpp

clear:
	rm *.o output

