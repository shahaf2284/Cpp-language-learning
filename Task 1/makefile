executable_1: assignment1.o TwoDigits.o Fraction.o String.o Menu.o
	g++ assignment1.o TwoDigits.o Fraction.o String.o Menu.o -o executable_1

assignment1.o: assignment1.cpp
	g++ -c assignment1.cpp

TwoDigits.o: TwoDigits.cpp
	g++ -c TwoDigits.cpp

Fraction.o: Fraction.cpp
	g++ -c Fraction.cpp

String.o: String.cpp
	g++ -c String.cpp

Menu.o: Menu.cpp
	g++ -c Menu.cpp

clean:
	rm *.o executable_1