//Tnode.cpp
//member functions for Tnode.h

#include <iostream>
#include "Tnode.h"

using namespace std;

Tnode::Tnode(){ 
	parent = NULL;
	left = NULL;
	right = NULL;
}

void Tnode::printNode(int nodeD ){
	cout << nodeD<< endl;
}
