//Hash.h
//Structure for Hash.cpp
//Hash is the pointer which points to nill at the end of the tree
#ifndef HASH_H
#define HASH_H
#include "Hnode.h"

class Hash {
private:
	Hnode* psearch; //previous search
	Hnode* search; // current search pointer
	Hnode* Htable[20];//creates an array of pointers
public:
	Hash(); //default constructor
	~Hash(); // destructor
	void printNodes(); //prints the table
	int Hfunction(int); // hash function which gets the index of the table
	void Insert(int); // insert function 
	void Delete(int); // deletes nodes
	Hnode* Search(int); // searches for a node
};
#endif
