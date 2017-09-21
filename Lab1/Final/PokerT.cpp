/*
 * **********************************************************
 * Please use g++ -std=c++11 NameOfFile.cpp -o OUTPUT
 * Carlos Hernandez
 * 9/20/2016
 * COSC 320
 * DR. Park
 ************************************************************
 */


#include <iostream>
#include <string>
#include<cstring>
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


	Card (){} //Default Constructer

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
};

// The following code creates the template of each card, Ace to King
string card1[9] = {"---------", "|A      |", "|       |", "|       |", "|   X   |","|       |","|       |","|       |",  "|      A|"};
string card2[9] = {"---------", "|2      |", "|       |", "|   X   |", "|       |","|       |","|       |","|   X   |",  "|      2|"};
string card3[9] = {"---------", "|3      |", "|       |", "|   X   |", "|       |","|   X   |","|       |","|   X   |",  "|      3|"};
string card4[9] = {"---------", "|4      |", "|       |", "| X   X |", "|       |","|       |","|       |","| X   X |",  "|      4|"};
string card5[9] = {"---------", "|5      |", "|       |", "| X   X |", "|       |","|   X   |","|       |","| X   X |",  "|      5|"};
string card6[9] = {"---------", "|6      |", "|       |", "| X   X |", "|       |","| X   X |","|       |","| X   X |",  "|      6|"};
string card7[9] = {"---------", "|7      |", "|       |", "| X   X |", "|   X   |","| X   X |","|       |","| X   X |",  "|      7|"};
string card8[9] = {"---------", "|8      |", "|       |", "| X   X |", "|   X   |","| X   X |","|   X   |","| X   X |",  "|      8|"};
string card9[9] = {"---------", "|9      |", "|       |", "| X   X |", "| X   X |","|   X   |","| X   X |","| X   X |",  "|      9|"};
string card10[9] = {"---------", "|10     |", "|       |", "| X   X |", "| X   X |","| X   X |","| X   X |","| X   X |",  "|     10|"};
string card11[9] = {"---------", "|J      |", "|       |", "|       |", "|       |","|       |","|       |","|       |",  "|      J|"};
string card12[9] = {"---------", "|Q      |", "|       |", "|       |", "|       |","|       |","|       |","|       |",  "|      Q|"};
string card13[9] = {"---------", "|K      |", "|       |", "|       |", "|       |","|       |","|       |","|       |",  "|      K|"};

//the following code creates the parts of the cards with the suit pictures
string spade1 = "|   \xE2\x99\xA0   |";
string heart1 = "|   \xE2\x99\xA5   |";
string diamond1 = "|   \xE2\x99\xA6   |";
string club1 = "|   \xe2\x99\xa3   |";


string spade2 = "| \xE2\x99\xA0   \xE2\x99\xA0 |";
string heart2 = "| \xE2\x99\xA5   \xE2\x99\xA5 |";
string diamond2 = "| \xE2\x99\xA6   \xE2\x99\xA6 |";
string club2 = "| \xE2\x99\xA3   \xE2\x99\xA3 |";



void print(string game, string arr1[], string arr2[], int cards){
	string array[10];
	int counts = 0;
	int y;
	if(game == "poker"){
		for(int x= 0; x<45; x++){
			y = x%5;
			if(arr1[y] == "1"){
				if(counts == 4){
					if(arr2[y] == "spade"){
						array[4] = spade1;
					}
					else if(arr2[y] == "heart"){
						array[4] = heart1;
					}
					else if(arr2[y] == "diamond"){
						array[4] = diamond1;
					}
					else if(arr2[y] == "club"){
						array[4] = club1;
					}
					else
						cout<<"failing"<<endl;
				}
				else
					copy(begin(card1), end(card1), begin(array));
			}
			else if(arr1[y] == "2"){
				if(counts == 3 || counts == 7){
						if(arr2[y] == "spade"){
							array[counts] = spade1;
						}
						else if(arr2[y] == "heart"){
							array[counts] = heart1;
						}
						else if(arr2[y] == "diamond"){
							array[counts] = diamond1;
						}
						else if(arr2[y] == "club"){
							array[counts] = club1;
						}
						else
							cout<<"failing"<<endl;
					}
					else
						copy(begin(card2), end(card2), begin(array));
			}
			else if(arr1[y] == "3"){
				if(counts == 3 || counts == 5 || counts == 7){
					if(arr2[y] == "spade"){
						array[counts] = spade1;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart1;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond1;
					}
					else if(arr2[y] == "club"){
						array[counts] = club1;
					}
					else
						cout<<"failing"<<endl;
				}
				else
					copy(begin(card3), end(card3), begin(array));
			}
			else if(arr1[y] == "4"){
				if(counts == 3 ||counts == 7){
					if(arr2[y] == "spade"){
						array[counts] = spade2;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart2;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond2;
					}
					else if(arr2[y] == "club"){
						array[counts] = club2;
					}
					else
						cout<<"failing"<<endl;
				}
				else
				copy(begin(card4), end(card4), begin(array));
			}
			else if(arr1[y] == "5"){
				if(counts == 3 || counts== 7){
					if(arr2[y] == "spade"){
						array[counts] = spade2;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart2;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond2;
					}
					else if(arr2[y] == "club"){
						array[counts] = club2;
					}
					else
						cout<<"failing"<<endl;
				}
				else if(counts == 5){
					if(arr2[y] == "spade"){
						array[counts] = spade1;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart1;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond1;
					}
					else if(arr2[y] == "club"){
						array[counts] = club1;
					}
				}
				else
					copy(begin(card5), end(card5), begin(array));
			}
			else if(arr1[y] == "6"){
				if(counts == 3 ||counts == 5 || counts == 7){
					if(arr2[y] == "spade"){
						array[counts] = spade2;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart2;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond2;
					}
					else if(arr2[y] == "club"){
						array[counts] = club2;
					}
					else
						cout<<"failing"<<endl;
				}
				else
					copy(begin(card6), end(card6), begin(array));
			}
			else if(arr1[y] == "7"){
				if(counts == 3 ||counts == 7 || counts== 5){
					if(arr2[y] == "spade"){
						array[counts] = spade2;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart2;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond2;
					}
					else if(arr2[y] == "club"){
						array[counts] = club2;
					}
					else
						cout<<"failing"<<endl;
				}
				else if(counts == 4){
					if(arr2[y] == "spade"){
						array[counts] = spade1;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart1;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond1;
					}
					else if(arr2[y] == "club"){
						array[counts] = club1;
					}
					else
						cout<<"failing"<<endl;
				}
				else
					copy(begin(card7), end(card7), begin(array));
			}
			else if(arr1[y] == "8"){
				if(counts == 3 ||counts == 7 || counts == 5){
					if(arr2[y] == "spade"){
						array[counts] = spade2;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart2;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond2;
					}
					else if(arr2[y] == "club"){
						array[counts] = club2;
					}
					else
						cout<<"failing"<<endl;
				}
				else if(counts == 4 || counts == 6){
					if(arr2[y] == "spade"){
						array[counts] = spade1;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart1;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond1;
					}
					else if(arr2[y] == "club"){
						array[counts] = club1;
					}
					else
						cout<<"failing"<<endl;
				}
				else
					copy(begin(card8), end(card8), begin(array));
			}
			else if(arr1[y] == "9"){
				if(counts == 3 ||counts == 7|| counts == 4 || counts == 5){
					if(arr2[y] == "spade"){
						array[counts] = spade2;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart2;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond2;
					}
					else if(arr2[y] == "club"){
						array[counts] = club2;
					}
					else
						cout<<"failing"<<endl;
				}
				else if (counts == 6){
					if(arr2[y] == "spade"){
						array[counts] = spade1;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart1;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond1;
					}
					else if(arr2[y] == "club"){
						array[counts] = club1;
					}
					else
						cout<<"failing"<<endl;
				}
				else
					copy(begin(card9), end(card9), begin(array));
			}
			else if(arr1[y] == "10"){
				if(counts == 3 ||counts == 7 || counts == 5 ||counts == 6 || counts == 4){
					if(arr2[y] == "spade"){
						array[counts] = spade2;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart2;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond2;
					}
					else if(arr2[y] == "club"){
						array[counts] = club2;
					}
					else
						cout<<"failing"<<endl;
				}
				else
					copy(begin(card10), end(card10), begin(array));
			}
			else if(arr1[y] == "11"){
				copy(begin(card11), end(card11), begin(array));
			}
			else if(arr1[y] == "12"){
				copy(begin(card12), end(card12), begin(array));
			}
			else if(arr1[y] == "13"){
				copy(begin(card13), end(card13), begin(array));
			}
			else
				cout<<"fail"<<endl;
			
			if(y == 0 && x != 0){
				cout<<endl<<array[counts];
			}
			else{
				cout<<array[counts];
				if(y ==4)
					counts++;
			}
		}
	}
	else{
		for(int x= 0; x<(cards * 9); x++){
			y = x%cards;

			if(arr1[y] == "1"){
				if(counts == 4){
					if(arr2[y] == "spade"){
						array[4] = spade1;
					}
					else if(arr2[y] == "heart"){
						array[4] = heart1;
					}
					else if(arr2[y] == "diamond"){
						array[4] = diamond1;
					}
					else if(arr2[y] == "club"){
						array[4] = club1;
					}
					else
						cout<<"failing"<<endl;
				}
				else
					copy(begin(card1), end(card1), begin(array));
			}
			else if(arr1[y] == "2"){
				if(counts == 3 || counts == 7){
						if(arr2[y] == "spade"){
							array[counts] = spade1;
						}
						else if(arr2[y] == "heart"){
							array[counts] = heart1;
						}
						else if(arr2[y] == "diamond"){
							array[counts] = diamond1;
						}
						else if(arr2[y] == "club"){
							array[counts] = club1;
						}
						else
							cout<<"failing"<<endl;
					}
					else
						copy(begin(card2), end(card2), begin(array));
			}
			else if(arr1[y] == "3"){
				if(counts == 3 || counts == 5 || counts == 7){
					if(arr2[y] == "spade"){
						array[counts] = spade1;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart1;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond1;
					}
					else if(arr2[y] == "club"){
						array[counts] = club1;
					}
					else
						cout<<"failing"<<endl;
				}
				else
					copy(begin(card3), end(card3), begin(array));
			}
			else if(arr1[y] == "4"){
				if(counts == 3 ||counts == 7){
					if(arr2[y] == "spade"){
						array[counts] = spade2;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart2;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond2;
					}
					else if(arr2[y] == "club"){
						array[counts] = club2;
					}
					else
						cout<<"failing"<<endl;
				}
				else
				copy(begin(card4), end(card4), begin(array));
			}
			else if(arr1[y] == "5"){
				if(counts == 3 || counts== 7){
					if(arr2[y] == "spade"){
						array[counts] = spade2;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart2;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond2;
					}
					else if(arr2[y] == "club"){
						array[counts] = club2;
					}
					else
						cout<<"failing"<<endl;
				}
				else if(counts == 5){
					if(arr2[y] == "spade"){
						array[counts] = spade1;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart1;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond1;
					}
					else if(arr2[y] == "club"){
						array[counts] = club1;
					}
				}
				else
					copy(begin(card5), end(card5), begin(array));
			}
			else if(arr1[y] == "6"){
				if(counts == 3 ||counts == 5 || counts == 7){
					if(arr2[y] == "spade"){
						array[counts] = spade2;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart2;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond2;
					}
					else if(arr2[y] == "club"){
						array[counts] = club2;
					}
					else
						cout<<"failing"<<endl;
				}
				else
					copy(begin(card6), end(card6), begin(array));
			}
			else if(arr1[y] == "7"){
				if(counts == 3 ||counts == 7 || counts== 5){
					if(arr2[y] == "spade"){
						array[counts] = spade2;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart2;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond2;
					}
					else if(arr2[y] == "club"){
						array[counts] = club2;
					}
					else
						cout<<"failing"<<endl;
				}
				else if(counts == 4){
					if(arr2[y] == "spade"){
						array[counts] = spade1;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart1;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond1;
					}
					else if(arr2[y] == "club"){
						array[counts] = club1;
					}
					else
						cout<<"failing"<<endl;
				}
				else
					copy(begin(card7), end(card7), begin(array));
			}
			else if(arr1[y] == "8"){
				if(counts == 3 ||counts == 7 || counts == 5){
					if(arr2[y] == "spade"){
						array[counts] = spade2;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart2;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond2;
					}
					else if(arr2[y] == "club"){
						array[counts] = club2;
					}
					else
						cout<<"failing"<<endl;
				}
				else if(counts == 4 || counts == 6){
					if(arr2[y] == "spade"){
						array[counts] = spade1;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart1;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond1;
					}
					else if(arr2[y] == "club"){
						array[counts] = club1;
					}
					else
						cout<<"failing"<<endl;
				}
				else
					copy(begin(card8), end(card8), begin(array));
			}
			else if(arr1[y] == "9"){
				if(counts == 3 ||counts == 7|| counts == 4 || counts == 5){
					if(arr2[y] == "spade"){
						array[counts] = spade2;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart2;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond2;
					}
					else if(arr2[y] == "club"){
						array[counts] = club2;
					}
					else
						cout<<"failing"<<endl;
				}
				else if (counts == 6){
					if(arr2[y] == "spade"){
						array[counts] = spade1;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart1;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond1;
					}
					else if(arr2[y] == "club"){
						array[counts] = club1;
					}
					else
						cout<<"failing"<<endl;
				}
				else
					copy(begin(card9), end(card9), begin(array));
			}
			else if(arr1[y] == "10"){
				if(counts == 3 ||counts == 7 || counts == 5 ||counts == 6 || counts == 4){
					if(arr2[y] == "spade"){
						array[counts] = spade2;
					}
					else if(arr2[y] == "heart"){
						array[counts] = heart2;
					}
					else if(arr2[y] == "diamond"){
						array[counts] = diamond2;
					}
					else if(arr2[y] == "club"){
						array[counts] = club2;
					}
					else
						cout<<"failing"<<endl;
				}
				else
					copy(begin(card10), end(card10), begin(array));
			}
			else if(arr1[y] == "11"){
				copy(begin(card11), end(card11), begin(array));
			}
			else if(arr1[y] == "12"){
				copy(begin(card12), end(card12), begin(array));
			}
			else if(arr1[y] == "13"){
				copy(begin(card13), end(card13), begin(array));
			}
			else
				cout<<"fail"<<endl;
			if( game == "player"){
				if(y == 0 && x != 0){
					cout<<endl<<array[counts];
				}
				else{
				cout<<array[counts];
				if(y ==cards-1)
					counts++;
				}
			}
			else if(game == "first"){
					cout<<endl<<array[counts];
					counts++;
			}
			else{
				if(y == 0 && x != 0){
					cout<<endl<<array[counts];
				}
				else{
					cout<<array[counts];
				if(y ==cards -1)
					counts++;
				}
			}
		}
	}
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
 		double bet= 0.0;
 		double payout;
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
			do{
				cout <<"How much would you like to bet on the hand?"<< endl;
				cin >> bet; //Holds the bet
				if(bet > stack){
					cout<<endl<<"You are betting more than you have to play with"<<endl;
				}
			}while(bet > stack);
			if(rigged == true){
				cout << "okay we will rig your hand... What kind of hand do you want?"<<endl;
				cout<<"HighCard (h) \n Pair (p) \n TwoPair(tp) \n Trips(t) \n straight (str) \n Flush (flu) \n Full house (fh) \n Four of  a kind (f) \n Straight Flush(strf) \n Royal striaght flush (rsf) \n"<<endl;
				cin>>rigging;
			}
			
			for(int c = 0; c <5; c++){ //The following code checks the cards dealt to the player and prints them
			if(rigged == false){
				obj = decks.deal();
				a  = obj.getNum();
				b = obj.getSuit();
				iniN[c] = a;
				iniS[c] = b;
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
			print("poker", iniN, iniS, 5);	
		for (int pea =0; pea < 7; pea++){ // asks the player if they would like to hold or redraw each card
			cout <<endl;
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
			
			}
			print("poker", iniN, iniS, 5);
			
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
 		double bet = 0.0;
 		double payout;
		int Numb[5];
	void BlackJack(){ //Impliments the black jack game
		decks.shuffleCard();
 		while(playing == true){ // the actual game
 		cout<< "How big is your initial stack?"<<endl;
 		cin >> stack;
 		cout<< "would you like to play now?"<<endl;
 		cin>> decisions;
 		string N[10]; // array to hold the numbers
		string S[10]; // array to hold the suits
		string DN[10]; // array to hold the numbers
		string DS[10]; // array to hold the suits
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
			do{ 
			cout <<"How much would you like to bet on the hand?"<< endl;
			cin >> bet; // holds the bet
			if(bet > stack){
				cout<<endl<<"You are betting more than you have to play with"<<endl;
			}
			}while(bet > stack);
			int c, dc, pc;
			pc = 0;
			dc = 0;
												//The following code deals the player their first two cards
			cout<<"Players hand"<<endl;
			for(c = 0; c <2; c++){
				obj = decks.deal();
				a  = obj.getNum();
				b = obj.getSuit();
				pc++;
				N[c] = a;
				S[c] = b;
			}
			print("player", N, S, pc);
														//code deals the dealers cards
			cout << endl<<endl<<"Dealers Hand"<<endl<<endl;
			for(c = 0; c <2; c++){
				obj = decks.deal();
				a  = obj.getNum();
				b = obj.getSuit();
				dc++;
				DN[c] = a;
				DS[c] = b;
			if(DN[c] == "1"){
				ace = true;
			}
			else
				ace = false;
				
				}
			print("first", DN, DS, dc-1);	
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

			while(stay == false && Pbust == false && sumP != 21 ){ //asks the player if they want to hit or stay and then deals the player a card or allows them to stay
			if (sumP >21) {
				cout << "You have busted, sorry" <<endl;
				Pbust = true;
			}
			else {
			cout<<endl<<endl<<"Hit or stay? (h) or (s): ";
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
				N[pc] = a;
				S[pc] = b;
				print("player", N, S, pc+1);
				hit = false;
				sumP = sumP + stoi(N[pc]);
			for(int check = 0; check <=pc; check++){
				if (N[check] == "1" && sumP <= 21) {
					sumP = sumP +10;
					if(sumP >21){
						sumP = sumP -10;
					}
				}
				if(N[check] == "11"){
					sumP -= 1;
				}
				if (N[check] == "12"){
					sumP -=2;
				}
				if(N[check] == "13"){
					sumP -=3;
				}
			}
			pc++;
				cout<<endl<<"Your total is: " << sumP<<endl;
			}		
		}
		//print("blackjack", N, S, pc);
	}
			while (dealersT == true){
			while (busted == false){
				for(int check2 = 0; check2 <=dc; check2++){
					if (DN[check2] == "1" && sumD <= 21) {
						sumD = sumD +10;
						if(sumD >21){
							sumD = sumD -10;
						}
					}
					if(DN[check2]=="11"){
						sumD = sumD-1;
					}
					if(DN[check2] =="12"){
						sumD = sumD-2;
					}
					if (DN[check2] == "13"){
						sumD = sumD -3;
					}
				}
			if(sumD <= 16){
				obj = decks.deal(); // deals the next card into the array (dealers hand)
				a  = obj.getNum(); 
				b = obj.getSuit();
				DN[dc] = a;
				DS[dc] = b;
				sumD = sumD + stoi(DN[dc]);
				dc++;
				}
			if(sumD> 16){
				busted = true;
			}
		}
			dealersT = false;
			cout<< "Dealers total is: " << sumD<<endl;
			cout<<"Dealers Hand:"<<endl;
		//print("blackjack", DN, DS, dc);
		}
				print("blackjack", DN, DS, dc);
			if (sumD >= sumP && sumD <=21 && sumP <21){
				cout<<endl<<endl<<"try agian next time, the dealer won."<<endl;
				stack = stack - bet;
				cout<<"Your current stack is: " <<stack<<endl;
				
				}
			else if(sumD < sumP && sumP<=21 && sumD <= 21){
				winnings = bet *1.5;
				stack = stack + winnings;
				cout << endl<<endl<<"You beat the dealer!! Congrat and here is your winnings: " <<winnings <<endl;
				cout<<"Your current stack is: "<<stack<<endl;
			}
			else  if(sumD>21){
				cout<<endl<<endl<<"Congrats, the dealer has busted. You Win"<<endl;
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