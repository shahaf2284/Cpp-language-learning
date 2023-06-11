executable_1: assignment2.o String.o Client.o MatchMakingAgency.o Menu.o
	g++ assignment2.o String.o Client.o MatchMakingAgency.o Menu.o -o executable_1

assignment2.o: assignment2.cpp
	g++ -c assignment2.cpp

String.o: String.cpp
	g++ -c String.cpp

Client.o: Client.cpp
	g++ -c Client.cpp

MatchMakingAgency.o: MatchMakingAgency.cpp
	g++ -c MatchMakingAgency.cpp

Menu.o: Menu.cpp
	g++ -c Menu.cpp

clean:
	rm *.o executable_1