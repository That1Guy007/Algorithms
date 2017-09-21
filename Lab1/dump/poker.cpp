//poker.cpp
//takes poker.h
#include "poker.h"
#include "globals.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

class Poker: public Card, public cardDeck {	 // this is the poker class which inherits the Card class
public:
	//Initialized variables
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
		int Num[5];
	void PokerG(){ // The function which starts playing poker
		decks.shuffleCard(); //Shuffles the card before the game
 		while(playing == true){ // the actual game
 		cout<< "How big is your initial stack?"<<endl;
 		cin >> stack;
 		cout<< "would you like to play now?"<<endl;
 		cin>> decisions;
 		string* iniN = new string[10];
		string* iniS = new string[10];
		string a, b, sui;
 		if(decisions == "Y" || decisions == "y"){
 			playing = true;
 			}
 		else if (decisions == "N"||decisions == "n"){
 			playing = false;
 			}
		else{
			cout<<"Error please niput decision again";
			cin>>decisions;
		}
		while (playing == true){ // deals out the cards
			stackIni = stack; // Keeps track of your stack
			cout <<"How much would you like to bet on the hand?"<< endl;
			cin >> bet; //Holds the bet
			
			for(int c = 0; c <5; c++){  //The following code checks the cards dealt to the player and prints them
				obj = decks.deal();
				a  = obj.getNum();
				b = obj.getSuit();
				iniN[c] = a;
				iniS[c] = b;
				
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
		for (int pea =0; pea < 7; pea++){ // asks the player if they would like to hold or redraw each card
			cout << iniS[pea] << endl;
			a = iniN[pea];
			sui = iniS[pea];
			if(sui == "spade"){
				if (a=="1"){
					cout <<"A \xE2\x99\xA0: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
				else if( a=="2"){
					cout <<"2 \xE2\x99\xA0: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
				else if(a =="3"){
					cout <<"3 \xE2\x99\xA0: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
				else if(a=="4"){
					cout <<"4 \xE2\x99\xA0: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
						
				else if(a=="5"){
					cout <<"5 \xE2\x99\xA0: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
						
				else if(a=="6"){
					cout <<"6 \xE2\x99\xA0: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
						
				else if(a == "7"){
					cout <<"7 \xE2\x99\xA0: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
					
				}	
				else if(a=="8"){
					cout <<"8 \xE2\x99\xA0: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
					
				}
				else if(a == "9"){
					cout <<"9 \xE2\x99\xA0: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
						
				else if( a == "10"){
					cout <<"10 \xE2\x99\xA0: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}	
						
				else if(a == "11"){
					cout <<"J \xE2\x99\xA0: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
						
				else if(a =="12"){
					cout <<"Q \xE2\x99\xA0: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
				else if(a=="13"){
					cout <<"K \xE2\x99\xA0: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}		
			}
				
			
			if (sui == "club"){
				if (a=="1"){
					cout <<"A \xe2\x99\xa3: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
				else if( a=="2"){
					cout <<"2 \xe2\x99\xa3: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
				else if(a =="3"){
					cout <<"3 \xe2\x99\xa3: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
				else if(a=="4"){
					cout <<"4 \xe2\x99\xa3: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
						
				else if(a=="5"){
					cout <<"5 \xe2\x99\xa3: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
						
				else if(a=="6"){
					cout <<"6 \xe2\x99\xa3: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
						
				else if(a == "7"){
					cout <<"7 \xe2\x99\xa3: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}	
				else if(a=="8"){
					cout <<"8 \xe2\x99\xa3: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
				else if(a == "9"){
					cout <<"9 \xe2\x99\xa3: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
						
				else if( a == "10"){
					cout <<"10 \xe2\x99\xa3: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}	
						
				else if(a == "11"){
					cout <<"J \xe2\x99\xa3: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
						
				else if(a =="12"){
					cout <<"Q \xe2\x99\xa3: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
				else if(a=="13"){
					cout <<"K \xe2\x99\xa3: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}	
			}
			
			if ( sui == "diamond"){
				if (a=="1"){
					cout <<"A \xE2\x99\xA6: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
				else if( a=="2"){
					cout <<"2 \xE2\x99\xA6: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
				else if(a =="3"){
					cout <<"3 \xE2\x99\xA6: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
				else if(a=="4"){
					cout <<"4 \xE2\x99\xA6: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
						
				else if(a=="5"){
					cout <<"5 \xE2\x99\xA6: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
						
				else if(a=="6"){
					cout <<"6 \xE2\x99\xA6: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
						
				else if(a == "7"){
					cout <<"7 \xE2\x99\xA6: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}	
				else if(a=="8"){
					cout <<"8 \xE2\x99\xA6: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
				else if(a == "9"){
					cout <<"9 \xE2\x99\xA6: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
						
				else if( a == "10"){
					cout <<"10 \xE2\x99\xA6: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}	
						
				else if(a == "11"){
					cout <<"J \xE2\x99\xA6: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
						
				else if(a =="12"){
					cout <<"Q \xE2\x99\xA6: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
				else if(a=="13"){
					cout <<"K \xE2\x99\xA6: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}	
			}
			
			if( sui == "heart"){
				if (a=="1"){
					cout <<"A \xE2\x99\xA5: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
				else if( a=="2"){
					cout <<"2 \xE2\x99\xA5: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
				else if(a =="3"){
					cout <<"3 \xE2\x99\xA5: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
				else if(a=="4"){
					cout <<"4 \xE2\x99\xA5: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
						
				else if(a=="5"){
					cout <<"5 \xE2\x99\xA5: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
						
				else if(a=="6"){
					cout <<"6 \xE2\x99\xA5: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
						
				else if(a == "7"){
					cout <<"7 \xE2\x99\xA5: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}	
				else if(a=="8"){
					cout <<"8 \xE2\x99\xA5: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
				else if(a == "9"){
					cout <<"9 \xE2\x99\xA5: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
						
				else if( a == "10"){
					cout <<"10 \xE2\x99\xA5: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}	
						
				else if(a == "11"){
					cout <<"J \xE2\x99\xA5: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
						
				else if(a =="12"){
					cout <<"Q \xE2\x99\xA5: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
				else if(a=="13"){
					cout <<"K \xE2\x99\xA5: Hold(1) or Redraw(0)?"<< endl;
					cin>>decisions;
				}
			}
			if (decisions == "0"){ //enters the redrawn cards into an array
				obj = decks.deal();
				a  = obj.getNum();
				b = obj.getSuit();
				iniN[pea] = a;
				iniS[pea] = b;
			}
				}
		for(int re= 0; re<5; re++){ //actually displayes the redrawn cards
			Num[re] = stoi(iniN[re]);
			a = iniN[re];
			b = iniS[re];
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
			
				int i, j, min, tmp; //This sorts the array of redrawn cards in order to figure out what the  player has
				
				
				string tmp2;//uses a temporary variable to hold a variable    
				      for (i = 0; i < 5 ; i++) { // goes through each index of the array given as the arguement
						  min = i;
						  for (j = i + 1; j < 5; j++) {// goes through each index of the argument array after i
							  if (Num[j] < Num[min]){ // compares i to each element of the array to find the next lowest number
								  min = j;
							  }
						  }
						              if (min != i) { //swaps the two elements of the array if i is bigger than j
										  tmp = Num[i];
										  Num[i] = Num[min];
										  Num[min] = tmp;
										  tmp2 = iniS[i];
										  iniS[i] = iniS[min];
										  iniS[min] = iniS[i];
									  }
							//cout << Num[i];
							//cout << iniS[i]<<endl;
					  }
		    if ((Num[0]+1) == (Num[1]) && (Num[1] +1) == Num[2] && (Num[2] +1) == Num[3]&&(Num[3] +1) == Num[4]){ // checks on the royal striaght flush, striaght flush, straight
					  if (iniS[0] == iniS[1] && iniS[0] == iniS[2] && iniS[0] == iniS[3] &&  iniS[0] == iniS[4]){
						  if ((Num[0] == 1 || Num[0] == 10) && Num[4] == 13){
							  cout << "You drew a Royal Flush!!"<<endl;
							  payout= bet * 10000;
							  stack = stack + payout;
						  }
						  cout << "The straight flush" << endl;
						  payout = bet *1000;
						  stack = stack + payout;
					  }
					  
					 else {
					 cout<< "You got a straight"<<endl;
					  payout = bet * 6;
					  stack = stack + payout;
					 }
			}
			  else if (iniS[0] == iniS[1] && iniS[0] == iniS[2] && iniS[0] == iniS[3] &&  iniS[0] == iniS[4]){ //checks on the flush
					cout<<"you got a flush"<<endl;  
					payout = bet * 8;
					stack = stack + payout;
			  }
			  else if (Num[0] == Num[1]){ // checks on two pair, four of a kind, full house, trips and pair
				  if(Num[2] == Num[3] || Num[3] == Num[4]){
					  cout<<"You have two pair"<<endl;
					  payout = bet * 2;
					  stack = stack + payout;
				  }
				  else if(Num[0] ==Num[2]){
					  if(Num[0] == Num[3]){
						cout<<"Four of a kind!"<<endl;  
						payout = bet * 20;
						stack = stack + payout;
					  }
					  else if(Num[3]==Num[4]){
						cout<<"Full House!!!"<<endl;  
						payout = bet * 10;
						stack = stack + payout;
					  }
					  cout<<"You have trips"<<endl;
					  payout = bet * 4;
					  stack = stack + payout;
				  }

			     else  if(Num[1] == Num[2]){
					  cout<<"You have two pair"<<endl;
					  payout = bet *2;
					  stack = stack + payout;
				  }
				  else{
					  cout<<"You have one pair"<<endl;
				  payout = bet;
				  stack = stack + payout;
				  }
			  }
			  else if(Num[1] == Num[2] ){ // checks on 4 of a kind, trips, two pair, and pair
				   if(Num[1] == Num[3] ){
					   if(Num[1] == Num[4]){
						   cout<<"You have four of a kind"<<endl;
						   payout = bet *20;
						   stack = stack + payout;
					   }
					   cout<<"You have trips"<<endl;
					   payout = bet *4;
					   stack = stack + payout;
				   }
				   else if(Num[3] == Num[4]){
					  cout<<"You have two pair"<<endl;
					  payout = bet *2;
					  stack = stack + payout;
					  
				  }
				 else{
					 cout<<"You have one pair"<<endl;
				  payout = bet;
				  stack = stack + payout;
				 }
			  }
			  else if(Num[2] == Num[3]){ // checks on trips and pair 
				  
				  if(Num[2] == Num[4]){
					  cout<<"You have trips"<<endl;
					  payout = bet *4;
					  stack = stack + payout;
				  }
				  else{ 
					  cout<<"You have one pair"<<endl;
				  payout = bet;
				  stack = stack + payout;
				  }
			  }
			  else if(Num[3] == Num[4]){ // checks for a pair
				  cout<<"You have one pair"<<endl;
				  payout = bet;
				  stack = stack + payout;
			  }
			  else{ // checks for a high card
				  cout << "You have a High card"<<endl;
				  payout = bet;
				  stack = stack + payout;
			  }
			  
			  cout<<"Your current balance is: $ " <<stack<<endl;
			  cout << "You gained: $ " << (stack - stackIni)<<endl;
			  cout << "Your initial balance was : $ "  <<stackIni<<endl;
			  cout<<"Would you like to keep playing? (Y or N)"<<endl;
			  cin>>decisions;
			  if(decisions == "n" || decisions=="N"){
				  playing = false;
			  }
			  

		}
		}
	}
};