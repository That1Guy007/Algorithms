//Tnode.cpp
//Member functions of Tnode class

#include <iostream>
#include "Tnode.h"


Tnode::Tnode(){
	parent = NULL;
	left = NULL;
	right = NULL;
	data = NULL;
	color = 'B';
}

Tnode::Tnode(int value, Tnode* nil){
	data = value;
	parent = nil;
	left = nil;
	right = nil;
	color = 'R';
}

