//blackjack.h

#ifndef BLACKJACK_H
#define BLACKJACK_H

#include "globals.h"
#include "card.h"
#include "cardDeck.h"
#include <string>
#include <iostream>

class BJ: public Card, public cardDeck{ //the blackjack class
public:
	//Initialized Variables
	int input;
	const char *clu;
	const char *s;
	const char *dia;
	const char *hea; 
	cardDeck decks;
	Card obj;
	double stack, stackIni;
	string decisions;
	bool playing;
	double bet, payout;
	int c;
	int Numb[5];
	void BlackJack(){ }
};

#endif