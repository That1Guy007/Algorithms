//BST.h
//structure of Binary search tree
#ifndef BST_H
#define BST_H

#include "Tnode.h"
#include <string>

class BST: public Tnode{
private:
	Tnode* t;  //temp node
	Tnode* bc;
	Tnode* y; // temp variable  which holds node info
	Tnode* root;
	Tnode* n;  // The new nodes being created
	Tnode* x = root;// temp variable  which holds node info
	int Max(Tnode*);
	Tnode* Min(Tnode*);
	Tnode* Successor(Tnode*);
	int Pred(Tnode*);// issues arise when i am trying to return a node... wtf
	void createNode();
public:
	BST();
	~BST();
	void startPrint(std::string);
	void inorder(Tnode*);
	void preorder(Tnode*);
	void postorder(Tnode*);
	void bstInsert(int);
	void bstDelete(int);
	Tnode* bstSearch(int);
};

#endif
