//template of the cards
//cards_t.cpp

#include <iostream>
#include <string>
#include <iomanip>
#include "globals.h"

using namespace std;

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