//card.cpp
//takes card.h


#include <string>
#include <iostream>
#include <cstdlib>
#include "globals.h"

using namespace std;

class Card { // Card class 
public:
	string Number, suit;
	int iniCard;


	//Card (){} //Default Contstructer

	Card (string cardValue, string cardSuit) :Number(cardValue), suit(cardSuit) { // Creates the card constrctor

	};

	string getNum(){ // grabs the number part
	 return Number;
	}

	string getSuit(){ // grabs the suit part
	    return suit;
	}

	int NextCard(){ 
		iniCard = 0;
		return 0;
	};
};