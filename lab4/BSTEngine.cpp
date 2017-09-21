//BSTEngine.cpp

#include <iostream>
#include <string>
#include "BST.h"
	
using namespace std;


//I may need to add  anode argument to searching and insert function 


main(){
	Tnode objT;
	BST objB;
	int ins; 
	int remove;
	int temp;
	string decision;
	
	while(decision != "0"){
		cout<<"insert element into the binary tree (1)"<<endl; //If chosen ask for input of a value
		cout<<"Delete Elements from the binary search tree (2)"<<endl;
		cout<<"Check binary tree by printing: \n\t Inorder(a) \n\t Post order(b) \n\t Preorder(c)"<<endl;
		cout<<"End program (0)"<<endl;
		cin >> decision;
		if(decision == "1"){
			cout<<"What element would you like inserted?"<<endl;
			cin>>ins;
			//cout<<"WTF!";
			objB.bstInsert(ins);
		}
		else if(decision == "2"){
			cout<<endl<<"Please input which element you would like to remove from the Tree"<<endl;
			cin>>remove;
			objB.bstDelete(remove);
		}
		else if(decision == "a"){
			objB.startPrint(decision);///Ran into issue passing the root of the tree
		}
		else if(decision =="b"){
			objB.startPrint(decision);
		}
		else if (decision == "c"){
			objB.startPrint(decision);
		}
		//cout<<objB.x;//finish if else statements
	
	}
}
