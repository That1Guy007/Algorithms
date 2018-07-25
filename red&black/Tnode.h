//Tnode.h 
//Structure of Tnode class

#ifndef TNODE_H
#define TNODE_H


class Tnode {
private:
	Tnode* parent;
	Tnode* left;
	Tnode* right;
	int data;
	char color;
public:
	friend class RBT;
	Tnode();
	Tnode(int, Tnode*);
};

#endif
