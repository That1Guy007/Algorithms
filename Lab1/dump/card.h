//card.h
//Header file for Poker project
//structure of the card class

#ifndef CARD_H
#define CARD_H


#include <string>
#include <iostream>
#include <cstdlib>
#include "globals.h"


class card{
	private:
	string Number, suit;
	int inicard;
	card();
	string getNum();
	string getSuit();
	int nextCard();
};

#endif