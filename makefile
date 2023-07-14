diceGame.exe: diceGame.o
	g++ -g -ggdb -o diceGame.exe diceGame.o
diceGame.o: diceGame.cpp
	g++ -g -ggdb -c -o diceGame.o diceGame.cpp