//Main.cpp

/**********	Carlos Hernandez **
***********	10/31/2016	*******
***********	COSC 320	*******/

#include <iostream>
#include <cstdlib>
#include "Hash.h"

using namespace std;

main(){
	Hnode objN;
	Hash objH;
	int ins; 
	int remove;
	int search;
	string decision = "1";
	
	while(decision != "0"){
		cout<<"Insert element into hash table (1)"<<endl; 
		cout<<"Delete Elements from the hash table (2)"<<endl;
		cout<<"Search the hash table(3)"<<endl;
		cout<<"Print the Hash table(4)"<<endl;
		cout<<"End program (0)"<<endl;
		cout<<"What is your decision: ";
		cin >> decision;
		if(decision == "1"){
			cout<<"What element would you like inserted?"<<endl;
			cin>>ins;
			objH.Insert(ins);
		}
		else if(decision == "2"){
			cout<<endl<<"Please input which element you would like to remove from the Hash table"<<endl;
			cin>>remove;
			objH.Delete(remove);
		}
		else if(decision == "3"){
			cout<<"What element would you like to search for? ";
			cin>>search;
			objH.Search(search);
		}
		else if(decision =="4"){
			objH.printNodes();
		}
		else if (decision !="0"){
			cout<<"Invalid Input. Please try aagain"<<endl;
		}	
	}
}
