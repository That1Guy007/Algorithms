//Hnode.h
//Structure for Hnode.cpp
#ifndef HNODE_H
#define HNODE_H
class Hnode{
private:	
	Hnode* next;
	int value;
public:
	friend class Hash;
};
#endif
