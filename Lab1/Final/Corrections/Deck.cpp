/*********************************************************\\
Deck.cpp
Carlos Hernandez
July 7, 2017
Poker & BlackJack
\\*********************************************************/

#include "Deck.h"
#include <iostream>
#include <cstdlib>

deck::deck(){
    for(int i = 0; i < 52; i++){
        cards[i].value = tempValue[i %12];
        //cards[i].suit = tempSuit[i/13]; //cool
    }
}

deck::~deck(){}

void deck::randomCardT(int data){
    std::cout<<"The card value is: "<< cards[data - 1].value <<std::endl<<
    "and the suit is: "<< cards[data -1].suit<<std::endl;
}
