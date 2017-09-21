//blackjack.cpp
//takes blackjack.h

#include "globals.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

class BJ: public Card, public cardDeck{ //the blackjack class
	public:
		//Initialized Variables
 int input;
		const char *clu = &club[4];
		const char *s = &spade[4];
		const char *dia = &diamond[4];
		const char *hea = &heart[4]; 
		cardDeck decks;
		Card obj;
 	 	double stack, stackIni;
		string decisions;
 		bool playing = true;
 		double bet, payout;
 		int c = 5;
		int Numb[5];
	void BlackJack(){ //Impliments the black jack game
		decks.shuffleCard();
 		while(playing == true){ // the actual game
 		cout<< "How big is your initial stack?"<<endl;
 		cin >> stack;
 		cout<< "would you like to play now?"<<endl;
 		cin>> decisions;
 		string* N = new string[10]; // array to hold the numbers
		string* S = new string[10]; // array to hold the suits
		string a, b, sui;
 		if(decisions == "Y" || decisions == "y"){
 			playing = true;
 			}
 		else if (decisions == "N"||decisions == "n"){
 			playing = false;
 			}
		while (playing == true){ // deals out the cards
			stackIni = stack;
			cout <<"How much would you like to bet on the hand?"<< endl;
			cin >> bet; // holds the bet
			int c;
			
			//The following code deals the player their first two cards
			
			for(c = 0; c <2; c++){
				obj = decks.deal();
				a  = obj.getNum();
				b = obj.getSuit();
				N[c] = a;
				S[c] = b;
				
			if(b == "spade"){
				if (a=="1"){
					Card1(s);
				}
				else if( a=="2"){
					Card2(s);
				}
				else if(a =="3"){
					Card3(s);
				}
				else if(a=="4"){
					Card4(s);
				}
						
				else if(a=="5"){
					Card5(s);
				}
						
				else if(a=="6"){
					Card6(s);
				}
						
				else if(a == "7"){
					Card7(s);
				}	
				else if(a=="8"){
					Card8(s);
				}
				else if(a == "9"){
					Card9(s);
				}
						
				else if( a == "10"){
					Card10(s);
				}	
						
				else if(a == "11"){
					Card11(s);
				}
						
				else if(a =="12"){
					Card12(s);
				}
				else if(a=="13"){
					Card13(s);
				}		
			}
				
			
			if (b == "club"){
				if (a=="1"){
					Card1(clu);
				}
				else if( a=="2"){
					Card2(clu);
				}
				else if(a =="3"){
					Card3(clu);
				}
				else if(a=="4"){
					Card4(clu);
				}
						
				else if(a=="5"){
					Card5(clu);
				}
						
				else if(a=="6"){
					Card6(clu);
				}
						
				else if(a == "7"){
					Card7(clu);
				}	
				else if(a=="8"){
					Card8(clu);
				}
				else if(a == "9"){
					Card9(clu);
				}
						
				else if( a == "10"){
					Card10(clu);
				}	
						
				else if(a == "11"){
					Card11(clu);
				}
						
				else if(a =="12"){
					Card12(clu);
				}
				else if(a=="13"){
					Card13(clu);
				}	
			}
			
			if ( b == "diamond"){
				if (a=="1"){
					Card1(dia);
				}
				else if( a=="2"){
					Card2(dia);
				}
				else if(a =="3"){
					Card3(dia);
				}
				else if(a=="4"){
					Card4(dia);
				}
						
				else if(a=="5"){
					Card5(dia);
				}
						
				else if(a=="6"){
					Card6(dia);
				}
						
				else if(a == "7"){
					Card7(dia);
				}	
				else if(a=="8"){
					Card8(dia);
				}
				else if(a == "9"){
					Card9(dia);
				}
						
				else if( a == "10"){
					Card10(dia);
				}	
						
				else if(a == "11"){
					Card11(dia);
				}
						
				else if(a =="12"){
					Card12(dia);
				}
				else if(a=="13"){
					Card13(dia);
				}	
			}
			
			if(b== "heart"){
				if (a=="1"){
					Card1(hea);
				}
				else if( a=="2"){
					Card2(hea);
				}
				else if(a =="3"){
					Card3(hea);
				}
				else if(a=="4"){
					Card4(hea);
				}
						
				else if(a=="5"){
					Card5(hea);
				}
						
				else if(a=="6"){
					Card6(hea);
				}
						
				else if(a == "7"){
					Card7(hea);
				}	
				else if(a=="8"){
					Card8(hea);
				}
				else if(a == "9"){
					Card9(hea);
				}
						
				else if( a == "10"){
					Card10(hea);
				}	
						
				else if(a == "11"){
					Card11(hea);
				}
						
				else if(a =="12"){
					Card12(hea);
				}
				else if(a=="13"){
					Card13(hea);
				}
				}
				}	
			bool hit;
			bool stay = false;
			while(stay == false){ //asks the player if they want to hit or stay and then deals the player a card or allows them to stay
			cout<< "Hit or stay? (h) or (s)"<<endl;
			cin >> decisions;
			if(decisions == "h" || decisions =="H"){
				hit = true;
				stay = false;
			}
			else if (decisions == "s" || decisions == "S"){
				hit = false;
				stay = true;
			}
			
			while (hit == true){
				obj = decks.deal(); // deals the next card into the array (players hand)
				a  = obj.getNum(); 
				b = obj.getSuit();
				c++;
				N[c] = a;
				S[c] = b;
				hit = false;
			}
			for(int re= 0; re<c+1; re++){ // actually displays the players hand
			a = N[re];
			b = S[re];
			if(b == "spade"){
				if (a=="1"){
					Card1(s);
				}
				else if( a=="2"){
					Card2(s);
				}
				else if(a =="3"){
					Card3(s);
				}
				else if(a=="4"){
					Card4(s);
				}
						
				else if(a=="5"){
					Card5(s);
				}
						
				else if(a=="6"){
					Card6(s);
				}
						
				else if(a == "7"){
					Card7(s);
				}	
				else if(a=="8"){
					Card8(s);
				}
				else if(a == "9"){
					Card9(s);
				}
						
				else if( a == "10"){
					Card10(s);
				}	
						
				else if(a == "11"){
					Card11(s);
				}
						
				else if(a =="12"){
					Card12(s);
				}
				else if(a=="13"){
					Card13(s);
				}		
			}
			
			if (b == "club"){
				if (a=="1"){
					Card1(clu);
				}
				else if( a=="2"){
					Card2(clu);
				}
				else if(a =="3"){
					Card3(clu);
				}
				else if(a=="4"){
					Card4(clu);
				}
						
				else if(a=="5"){
					Card5(clu);
				}
						
				else if(a=="6"){
					Card6(clu);
				}
						
				else if(a == "7"){
					Card7(clu);
				}	
				else if(a=="8"){
					Card8(clu);
				}
				else if(a == "9"){
					Card9(clu);
				}
						
				else if( a == "10"){
					Card10(clu);
				}	
						
				else if(a == "11"){
					Card11(clu);
				}
						
				else if(a =="12"){
					Card12(clu);
				}
				else if(a=="13"){
					Card13(clu);
				}	
			}
			
			if ( b == "diamond"){
				if (a=="1"){
					Card1(dia);
				}
				else if( a=="2"){
					Card2(dia);
				}
				else if(a =="3"){
					Card3(dia);
				}
				else if(a=="4"){
					Card4(dia);
				}
						
				else if(a=="5"){
					Card5(dia);
				}
						
				else if(a=="6"){
					Card6(dia);
				}
						
				else if(a == "7"){
					Card7(dia);
				}	
				else if(a=="8"){
					Card8(dia);
				}
				else if(a == "9"){
					Card9(dia);
				}
						
				else if( a == "10"){
					Card10(dia);
				}	
						
				else if(a == "11"){
					Card11(dia);
				}
						
				else if(a =="12"){
					Card12(dia);
				}
				else if(a=="13"){
					Card13(dia);
				}	
			}
			
			if(b== "heart"){
				if (a=="1"){
					Card1(hea);
				}
				else if( a=="2"){
					Card2(hea);
				}
				else if(a =="3"){
					Card3(hea);
				}
				else if(a=="4"){
					Card4(hea);
				}
						
				else if(a=="5"){
					Card5(hea);
				}
						
				else if(a=="6"){
					Card6(hea);
				}
						
				else if(a == "7"){
					Card7(hea);
				}	
				else if(a=="8"){
					Card8(hea);
				}
				else if(a == "9"){
					Card9(hea);
				}
						
				else if( a == "10"){
					Card10(hea);
				}	
						
				else if(a == "11"){
					Card11(hea);
				}
						
				else if(a =="12"){
					Card12(hea);
				}
				else if(a=="13"){
					Card13(hea);
				}
				}
			}
			
				}
				}
				
		

			}
}
};