//cardDeck.h
#ifndef CARDdECK_H
#define CARDdECK_H

	class cardDeck { // Creates the deck of objects (Cards)
	public:
	Card* deck = new Card[53]; // the array of cards
	cardDeck() {} //constructor that initializes the array of cards
	void shuffleCard() { // shuffles the cards
	}
	Card deal(){ //deals the cards one by one
	}
};

#endif