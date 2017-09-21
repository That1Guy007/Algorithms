all: Lab1

Lab1: poker.o main.o blackjack.o card.o card_t.o cardDeck.o
	g++ -std=c++11 heap.o -o Lab3
poker.o:poker.cpp
	g++ -std=c++11 -c poker.cpp
card.o:card.cpp
	g++ -std=c++11 -c card.cpp
blackjack.o:blackjack.cpp
	g++ -std=c++11 -c blackjack.cpp
cards_t.o:cards_t.cpp
	g++ -std=c++11 -c cards_t.cpp
cardDeck.o:cardDeck.cpp
	g++ -std=c++11 -c cardDeck.cpp
main.o: main.cpp
	g++ -std=c++11 -c main.cpp