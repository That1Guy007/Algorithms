//BSTEngine.cpp
//********************************			Carlos Hernandez 			**************************\\
//********************************				11/16/2016				**************************\\
//********************************				COSC320		 			**************************\\

#include <iostream>
#include <string>
#include "RBT.h"
	
using namespace std;

main(){
	Tnode objT;
	RBT objR;
	int ins; 
	int remove;
	int temp;
	string decision;
	
	while(decision != "0"){
		cout<<"\nInsert element into the binary tree (1)\n"<<endl; 
		cout<<"Delete Elements from the binary search tree (2)\n"<<endl;
		cout<<"Check binary tree by printing: \n\t Inorder(a) \n\t Post order(b) \n\t Preorder(c)\n"<<endl;
		cout<<"End program (0)\n"<<endl;
		cout<<"Your decision: ";
		cin >> decision;
		if(decision == "1"){
			cout<<"What element would you like inserted?"<<endl;
			cin>>ins;
			objR.rbtInsert(ins);
		}
		else if(decision == "2"){
			cout<<endl<<"Please input which element you would like to remove from the Tree"<<endl;
			cin>>remove;
			objR.rbtDelete(remove);
		}
		else if(decision == "a"){
			objR.startPrint(decision);
		}
		else if(decision =="b"){
			objR.startPrint(decision);
		}
		else if (decision == "c"){
			objR.startPrint(decision);
		}

	
	}
}
