/*
 * ************************************************************ 
 * Please use g++ -std=c++11 NameOfFile.cpp -o OUTPUT
 * Carlos Hernandez
 * 9/20/2016
 * COSC 320
 * DR. Park
 ************************************************************
 */


//format your cards to mach the right face


#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

const char spade[4] = "\xE2\x99\xA0";
const char club[4] = "\xe2\x99\xa3";
const char heart[4] = "\xE2\x99\xA5";
const char diamond[4] = "\xE2\x99\xA6";
const int cards = 52;



class Card { // Card class 
public:
	string Number, suit;
	int iniCard;


	Card (){} //Default Contstructer

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



int indexCard;

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
      //rigged hands
		string H_card[5] = {"2", "3", "4", "6", "11"};
		string Pair_card[5] = {"2", "2", "3", "4", "7"};
		string tPair_card[5] = {"2", "2", "3", "3", "8"};
		string Trip_card[5] = {"2", "2", "2", "3", "6"};
		string Str_card[5] = {"2", "3", "4", "5", "6"};
		string Flu_card[5] = {"spade","spade","spade","spade","spade"};
		string FullH_card[5] = {"2", "2", "2", "3", "3"};
		string four_card[5] = {"2", "2", "2", "2","3"};
		string StrFLu_Ncard[5] = {"2", "3", "4", "5","6"};
		string RSF_card[5] = {"1", "10", "11", "12", "13"};
		string r_card[5] = {"spade","club","heart","diamond","spade"};
      
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



string wtf[5];



// The following code creates the template of each card, Ace to King
//Create an array of each card peice
//Each string segment will be an element of the array

void Dcard(){
	int inc =0;
	int inc1= 0;
	int inc2= 0;
	int inc3= 0;
	int inc4= 0;
	int inc5= 0;
	int inc6= 0;
	int inc7= 0;
	int inc8= 0;
	int inc9= 0;
	int inc10= 0;
	int inc11= 0;
	int inc12= 0;

	
	string Ace[11] = { "---------","|A       |","|        |","|        |", "|        |","|        |","|        |", "|        |","|        |","|       A|", "---------"
	};
	string Two[11] = {
		"---------","|2       |","|        |","|        |", "|        |","|        |","|        |", "|        |","|        |","|       2|", "---------"
	};
	string Three[11] = {
		"---------","|3       |","|        |","|        |", "|        |","|        |","|        |", "|        |","|        |","|       3|", "---------"
	};
	string Four[11] = {
		"---------","|4       |","|        |","|        |", "|        |","|        |","|        |", "|        |","|        |","|       4|", "---------"
	};
	string Five[11] = {
		"---------","|5       |","|        |","|        |", "|        |","|        |","|        |", "|        |","|        |","|       5|", "---------"
	};
	string Six[11] = {
		"---------","|6       |","|        |","|        |", "|        |","|        |","|        |", "|        |","|        |","|       6|", "---------"
	};
	string Seven[11] = {
		"---------","|7       |","|        |","|        |", "|        |","|        |","|        |", "|        |","|        |","|       7|", "---------"
	};
	string Eight[11] = {
		"---------","|8       |","|        |","|        |", "|        |","|        |","|        |", "|        |","|        |","|       8|", "---------"
	};
	string Nine[11] = {
		"---------","|9       |","|        |","|        |", "|        |","|        |","|        |", "|        |","|        |","|       9|", "---------"
	};
	string Ten[11] = {
		"---------","|10      |","|        |","|        |", "|        |","|        |","|        |", "|        |","|        |","|      10|", "---------"
	};
	string Jack[11] = {
		"---------","|J       |","|        |","|        |", "|        |","|        |","|        |", "|        |","|        |","|       J|", "---------"
	};
	string Queen[11] = {
		"---------","|Q       |","|        |","|        |", "|        |","|        |","|        |", "|        |","|        |","|       Q|", "---------"
	};
	string King[11] = {
		"---------","|K       |","|        |","|        |", "|        |","|        |","|        |", "|        |","|        |","|       K|", "---------"
	};
	for(int x = 0; x<39;x++){
	int t = x%5;
	string input = wtf[t];
	if (t == 0) cout<<endl;
	if(input =="1"){
		cout<<Ace[inc];
		inc++;
	}
	else if(input =="2"){
		cout<<Two[inc1];
		inc1++;
	}
	else if(input =="3"){
		cout<<Three[inc2];
		inc2++;
	}
	else if(input =="4"){
		cout<< Four[inc3];
		inc3++;
	}
	else if(input =="5"){
		cout<< Five[inc4];
		inc4++;
	}
	else if(input =="6"){
		cout<<Six[inc5];
		inc5++;
	}
	else if(input =="7"){
		cout<< Seven[inc6];
		inc6++;
	}
	else if(input =="8"){
		cout<<Eight[inc7];
		inc7++;
	}
	else if(input =="9"){
		cout<< Nine[inc8];
		inc8++;
	}
	else if(input =="10"){
		cout<< Ten[inc9];
		inc9++;
	}
	else if(input =="11"){
		cout<< Jack[inc10];
		inc10++;
	}
	else if(input =="12"){
		cout<<Queen[inc11];
		inc11++;
	}
	else if(input =="13"){
		cout<< King[inc12];
		inc12++;
	}
	}
}


void Card1 (const char Pic[]){
		cout<<"---------"<<endl;
		cout<<"|"<<"A" <<setw(7)<<"|"<<endl;
		cout<<"|"<<setw(8)<<"|"<<endl;
		cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
		cout<<"|"<<setw(8)<<"|"<<endl;
		cout<<"|"<<setw(8)<<"|"<<endl;
		cout<<"|"<<setw(8)<<"|"<<endl;
		cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
		cout<<"|"<<setw(8)<<"|"<<endl;
		cout<<"|"<<setw(7)<<"A"<<"|"<<endl;
	}

void Card2 (const char Pic[]){
	cout<<"---------"<<endl;
	cout<<"|"<<"2" <<setw(7)<<"|"<<endl;
	cout<<"|"<<setw(8)<<"|"<<endl;
	cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
	cout<<"|"<<setw(8)<<"|"<<endl;
	cout<<"|"<<setw(8)<<"|"<<endl;
	cout<<"|"<<setw(8)<<"|"<<endl;
	cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
	cout<<"|"<<setw(8)<<"|"<<endl;
	cout<<"|"<<setw(7)<<"2"<<"|"<<endl;
		}

void Card3 (const char Pic[]){
    cout<<"---------"<<endl;
    cout<<"|"<<"3" <<setw(7)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(7)<<"3"<<"|"<<endl;
    }

void Card4 (const char Pic[]){
    cout<<"---------"<<endl;
    cout<<"|"<<"4" <<setw(7)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(7)<<"4"<<"|"<<endl;
}

void Card5 (const char Pic[]){
    cout<<"---------"<<endl;
    cout<<"|"<<"5" <<setw(7)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(7)<<"5"<<"|"<<endl;
}

void Card6 (const char Pic[]){
    cout<<"---------"<<endl;
    cout<<"|"<<"6" <<setw(7)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(7)<<"6"<<"|"<<endl;
}

void Card7 (const char Pic[]){
    cout<<"---------"<<endl;
    cout<<"|"<<"7" <<setw(7)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(7)<<"7"<<"|"<<endl;
}

void Card8 (const char Pic[]){
    cout<<"---------"<<endl;
    cout<<"|"<<"8" <<setw(7)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(7)<<"8"<<"|"<<endl;
}

void Card9(const char Pic[]){
    cout<<"---------"<<endl;
    cout<<"|"<<"9" <<setw(7)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(7)<<"9"<<"|"<<endl;
}

void Card10 (const char Pic[]){
    cout<<"---------"<<endl;
    cout<<"|"<<"10" <<setw(6)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(7)<<"10"<<"|"<<endl;
}

void Card11 (const char Pic[]){
    cout<<"---------"<<endl;
    cout<<"|"<<"J" <<setw(6)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
	cout<<"|"<<setw(7)<<"J"<<"|"<<endl;
	}

void Card12 (const char Pic[]){
	cout<<"---------"<<endl;
	cout<<"|"<<"Q" <<setw(6)<<"|"<<endl;
	cout<<"|"<<setw(8)<<"|"<<endl;
	cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
	cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<endl;
	cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
	cout<<"|"<<setw(8)<<"|"<<endl;
	cout<<"|"<<setw(7)<<"Q"<<"|"<<endl;
}

void Card13 (const char Pic[]){
	cout<<"---------"<<endl;
	cout<<"|"<<"K" <<setw(6)<<"|"<<endl;
	cout<<"|"<<setw(8)<<"|"<<endl;
	cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
	cout<<"|"<<setw(8)<<"|"<<endl;
	cout<<"|"<<setw(8)<<"|"<<endl;
	cout<<"|"<<setw(8)<<"|"<<endl;
	cout<<"|"<<setw(6)<<Pic<<setw(4)<<"|"<<endl;
	cout<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(7)<<"K"<<"|"<<endl;
	}

	
	
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
		string rigging;
		bool rigged= false;
 		if(decisions == "Y" || decisions == "y"){
 			playing = true;
 			}
 		else if (decisions == "N"||decisions == "n"){
 			playing = false;
 			}
		else if (decisions == "rigged" || decisions =="Rigged"){
			rigged = true;
		}
		else{
			cout<<"Error please input decision again";
			cin>>decisions;
		}
		while (playing == true){ // deals out the cards
			stackIni = stack; // Keeps track of your stack
			cout <<"How much would you like to bet on the hand?"<< endl;
			cin >> bet; //Holds the bet
			if(rigged == true){
				cout << "okay we will rig your hand... What kin dof hand do you want?"<<endl;
				cout<<"HighCard (h) \n Pair (p) \n TwoPair(tp) \n Trips(t) \n straight (str) \n Flush (flu) \n Full house (fh) \n Four of  akind (f) \n Straight Flush(strf) \n Royal striaght flush (rsf) \n"<<endl;
				cin>>rigging;
			}
			
			for(int c = 0; c <5; c++){ //The following code checks the cards dealt to the player and prints them
			if(rigged == false){
				obj = decks.deal();
				a  = obj.getNum();
				b = obj.getSuit();
				iniN[c] = a;
				iniS[c] = b;
				wtf[c] = a;
			}
			else{
				if (rigging == "h"){
				a = cardDeck::H_card[c];
				b = cardDeck::r_card[c];
				}
				else if (rigging == "p"){
					a = cardDeck::Pair_card[c];
					b = cardDeck::r_card[c];
				}
				else if(rigging == "tp"){
					a = cardDeck::tPair_card[c];
					b = cardDeck::r_card[c];
				}
				else if(rigging == "t"){
					a = cardDeck::Trip_card[c];
					b = cardDeck::r_card[c];
				}
				else if(rigging == "str"){
					a = cardDeck::Str_card[c];
					b = cardDeck::r_card[c];
				}
				else if(rigging == "flu"){
					a = cardDeck::H_card[c];
					b = cardDeck::Flu_card[c];
				}
				else if(rigging == "fh"){
					a = cardDeck::FullH_card[c];
					b = cardDeck::r_card[c];
				}
				else if(rigging == "f"){
					a = cardDeck::four_card[c];
					b = cardDeck::r_card[c];
				}
				else if(rigging == "strf"){
					a = cardDeck::StrFLu_Ncard[c];
					b = cardDeck::Flu_card[c];
				}
				else if(rigging == "rsf"){
					a = cardDeck::RSF_card[c];
					b = cardDeck::Flu_card[c];
				}
				iniN[c] = a;
				iniS[c] = b;
				
			}
			}
			/*string* temp1 = Dcard(iniN[0]);
			string* temp2 = Dcard(iniN[1]);
			string* temp3 = Dcard(iniN[2]);
			string* temp4 = Dcard(iniN[3]);
			string* temp5 = Dcard(iniN[4]);
			for(int wtf = 0; wtf<10; wtf++){
				cout<<Ace[wtf];
				cout<<Two[wtf];
				cout<<Three[wtf];
				cout<<Four[wtf];
				cout<<Five[wtf];
				cout<<endl;
				
			}*/
			Dcard();
			
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
		    if ((Num[0]+1) == (Num[1]) && (Num[1] +1) == Num[2] && (Num[2] +1) == Num[3]&&(Num[3] +1) == Num[4] || Num[0] +9 == Num[1]){ // checks on the royal striaght flush, striaght flush, straight
					  if (iniS[0] == iniS[1] && iniS[0] == iniS[2] && iniS[0] == iniS[3] &&  iniS[0] == iniS[4]){
						  if ((Num[0] == 1 || Num[0] == 10) && Num[4] == 13){
							  cout << "You drew a Royal Flush!!"<<endl;
							  payout= bet * 10000;
							  stack = stack + payout;
						  }
						  else{
						  cout << "The straight flush" << endl;
						  payout = bet *1000;
						  stack = stack + payout;
						  }
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
				  if(Num[0] ==Num[2]){
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
					  else{
					  cout<<"You have trips"<<endl;
					  payout = bet * 4;
					  stack = stack + payout;
					  }
				  }
				  else if(Num[2] == Num[3] || Num[3] == Num[4]){
					  cout<<"You have two pair"<<endl;
					  payout = bet * 2;
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
		string* DN = new string[10]; // array to hold the numbers
		string* DS = new string[10]; // array to hold the suits
		string a, b, sui;
		bool ace= false;
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
			int c, dc;
			
			//The following code deals the player their first two cards
			cout<<"Players hand"<<endl;
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
				
			//code deals the dealers cards
			cout << "Dealers Hand"<<endl<<endl;
			for(dc = 0; dc <2; dc++){
				obj = decks.deal();
				a  = obj.getNum();
				b = obj.getSuit();
				DN[dc] = a;
				DS[dc] = b;
			if(DN[dc] == "1"){
				ace = true;
			}
				
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
			bool dealersT = true; 
			bool stay = false;
			bool busted = false;
			bool Pbust =false;
			int winnings;
			bool insur = false;
			string insur_dec;
			int sumD = stoi(DN[0]) + stoi(DN[1]);
			if (ace == true){
				cout<<"would you like to buy insurance from the Ace? (y) or (n)"<<endl;
				cin>>insur_dec;
				if (insur_dec == "y" && sumD == 21){
					stack  = stack - bet/2;
					cout<<"congrats on your insurance, it was worth it: stack = "<< stack<<endl;
					stay = true;
					dealersT = false;
				}
				else if(insur_dec == "y" && sumD != 21){
					bet = bet + (bet /2);
				}
			}
			int sumP = stoi(N[0]) +stoi(N[1]);

			while(stay == false && Pbust == false){ //asks the player if they want to hit or stay and then deals the player a card or allows them to stay
			if (sumP >21) {
				cout << "You have busted, sorry" <<endl;
				Pbust = true;
			}
			else {
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
			
			while (hit == true && Pbust ==false){
				obj = decks.deal(); // deals the next card into the array (players hand)
				a  = obj.getNum(); 
				b = obj.getSuit();
				c++;
				N[c] = a;
				S[c] = b;
				hit = false;
				sumP = sumP + stoi(N[c]);
			for(int check = 0; check <=c; check++){
				if (N[c] == "1" && sumP <= 21) {
					sumP = sumP +10;
					if(sumP >21){
						sumP = sumP -10;
					}
				if(N[c] == "11"){
					sumP = sumP -1;
				}
				if (N[c] == "12"){
					sumP = sumP -2;
				}
				if(N[c] == "13"){
					sumP = sumP -3;
				}
				}
			}
				cout<<"Your total is: " << sumP<<endl;
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
			
				
			}}
			//cout <<"wtf"<<endl;
			//cout<<"WTF"<<endl;
			while (dealersT == true){
			while (busted == false){
				for(int check2 = 0; check2 <=c; check2++){
					if (DN[dc] == "1" && sumD <= 21) {
						sumD = sumD +10;
						if(sumD >21){
							sumD = sumD -10;
						}
					if(DN[dc]=="11"){
						sumD = sumD-1;
					}
					if(DN[dc] =="12"){
						sumD = sumD-2;
					}
					if (DN[dc] == "13"){
						sumD = sumD -3;
					}
					}
				}
			if(sumD <= 16){
				obj = decks.deal(); // deals the next card into the array (dealers hand)
				a  = obj.getNum(); 
				b = obj.getSuit();
				dc++;
				DN[dc] = a;
				DS[dc] = b;
				sumD = sumD + stoi(DN[dc]);
				}
			if(sumD> 16){
				busted = true;
			}
				cout<< "your total is: " << sumD<<endl;
			}
			dealersT = false;
			
			cout<<"Dealers Hand:"<<endl;
			
		for(int reD= 0; reD<dc+1; reD++){ // actually displays the dealers hand
			a = DN[reD];
			b = DS[reD];
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
			if (sumD >= sumP && sumD <=21 && sumP <=21){
				cout<<"try agian next time, the dealer won."<<endl;
				stack = stack - bet;
				cout<<"Your current stack is: " <<stack<<endl;
				
				}
			else if(sumD < sumP && sumP<=21 && sumD <= 21){
				winnings = bet *1.5;
				stack = stack + winnings;
				cout << "You beat the dealer!! Congrat and here is your winnings: " <<winnings <<endl;
				cout<<"Your current stack is: "<<stack<<endl;
			}
			else  if(sumD>21){
				cout<<"Congrats, the dealer has busted. You Win"<<endl;
				winnings = bet *1.5;
				stack = stack + winnings;
				cout<<"Here is your winnings: " <<winnings<< " Your current stack is: "<<stack<<endl;
			}
			else if(sumP>21){
				cout<<"Your losses are : "<<bet<<endl;
			}
		

			}
}}
};

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
