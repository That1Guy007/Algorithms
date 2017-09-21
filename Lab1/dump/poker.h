//poker.h

//prevent multiple inclulsions of header file
#ifndef POKER_H
#define POKER_H

#include <string>
#include "card.h"
#include "cardDeck.h"
#include "globals.h"

class Poker: public Card, public cardDeck {	 // this is the poker class which inherits the Card class
public:
	//Initialized variables
		int input;
		const char *clu;
		const char *s;
		const char *dia;
		const char *hea; 
 	 	double stack, stackIni;
 		bool playing;
 		double bet, payout;
 		int c;
		int Num[5];
	void PokerG(){ 
		}
};

#endif