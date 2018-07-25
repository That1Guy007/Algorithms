//Tnode.h


class Tnode {
private:
	Tnode* parent;
	Tnode* left;
	Tnode* right;
	int data;
public:
	friend class BST;
	Tnode();
	void printNode(int);
};
