//cardDeck.cpp
//takes cardDeck.h

#include <iostream>
#include <iomanip>
#include <string>
#include "globals.h"

using namespace std;


	class cardDeck { // Creates the deck of objects (Cards)
	public:
		Card* deck = new Card[53]; // the array of cards

      cardDeck() { //constructor that initializes the array of cards
	    string suits[4] = {"spade", "club", "heart", "diamond"};
	    string Numbers [13] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13"};
			indexCard = 0;
	    for (int x=0; x <= 52; x++){
	        deck[x] = Card(Numbers[x %12], suits[x/13]);
	    }
      }
      
	void shuffleCard() { // shuffles the cards
		indexCard = 0;
		int secondCard;
		srand(time(0));
		srand((unsigned) time( NULL));
		for (int firstCard = 0; firstCard < cards; firstCard++){
			secondCard =  rand() % 52 + 1;
			Card temp = deck[indexCard];
			deck[indexCard] = deck[secondCard];
			deck[secondCard] = temp;
		}
	}
	Card deal(){ //deals the cards one by one
		if (indexCard > cards){
			shuffleCard();
		}
		if (indexCard < cards){
			return (deck[indexCard ++]);
		}
		
		return(deck[0]);
		
	}
	
			//friend int Test(Card &deck2);
};