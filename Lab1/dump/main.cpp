//main.cpp

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include "globals.h"

using namespace std;

int main() {
	cardDeck obj2;
	Poker obj3;
	BJ Twenty_One;
	string idc;
	cout<< "Welcome to Casino Royal!"<< endl;
	cout<<"What game would you like to play?"<< endl;
	cout<<"Poker (P) or BlackJack (B)"<<endl;
	cin>> idc;
	if( idc =="p" || idc == "P"){
		obj3.PokerG();
	}
	else{
		Twenty_One.BlackJack();
	}
	return 0;
}