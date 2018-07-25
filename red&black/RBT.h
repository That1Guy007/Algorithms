//RBT.h
//Structure of RedBlackTree class

#ifndef RBT_H
#define RBT_H

#include <string>
#include "Tnode.h"

class RBT{
private:
	Tnode* Nill;
	Tnode* root;
	Tnode* Max(Tnode*);
	Tnode* Min(Tnode*);
	Tnode* Successor(Tnode*);
	Tnode* Pred(Tnode*);
	void createNode(Tnode*);
	void rotateR(Tnode*);
	void rotateL(Tnode*);
	void iFixup(Tnode*);
	void dFixup(Tnode*);
public:
	RBT();
	~RBT();
	void startPrint(std::string);
	void inorder(Tnode*);
	void preorder(Tnode*);
	void postorder(Tnode*);
	void rbtInsert(int);
	void rbtDelete(int);
	Tnode* rbtSearch(Tnode*, int);
	void printNode(int, char);
};

#endif
