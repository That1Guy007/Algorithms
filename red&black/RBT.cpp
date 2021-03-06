//RBT.cpp
//Member functions of RedBlackTree.cpp
#include <iostream>
#include <string>
#include "RBT.h"

RBT::RBT(){		//RBT default constructor
	Nill = new Tnode();		//Initialize Nill Node
	root = Nill;	// Initialize root node
}

RBT::~RBT(){		//RBT destructor

}

Tnode* RBT::rbtSearch(Tnode* x,int val){ //	Search which finds the node in question and returns the node
	if(x == Nill || val == x->data){ //checks to see if the node has been found
		return x;
	}
	if(val < x->data){ //goes left if the node value is less then the current node
		return rbtSearch(x->left,val);
	}
	else{ //goes right if the node value is greater than the current node
		return rbtSearch(x->right, val);
	}
}

void RBT::createNode(Tnode* node){	//Creates the Node and construcs the nodes pointer data
	Tnode* y = Nill;
	Tnode* x = root;
	while(x != Nill){ //Searches for the correct position of the node in the current RBT
		y = x;
		if(node->data < x->data){
			x = x->left;
		}
		else{
			x = x -> right;
		}
	}
	
	node->parent = y; //connects the new node to the current tree
	
	if(y == Nill){	//Assigns the root if the root doesnt exist
		root = node;
	}
	else if(node->data < y-> data){ //Assigns the node to the left
		y->left = node;
	}
	else {	//Assigns the node to the right
		y-> right = node;
	}
	iFixup(node); //Fixes the RBT in order to keep the properties
}

void RBT::iFixup(Tnode* z){ //Fixes up the RBT
	Tnode* y;
	while(z->parent->color == 'R'){ //Fixes up the tree as long as the nodes parent in red
		if(z->parent == z->parent->parent->left){
			y = z->parent->parent->right;
			
			if(y->color == 'R'){		
				z->parent->color = 'B';				//Case1
				y->color = 'B';						//Case1
				z->parent->parent->color = 'R';		//Case1
				z = z->parent->parent;				//Case1
			}
			else{
				if(z == z->parent->right){
					z = z->parent;		//Case2
					rotateL(z);			//Case2
				}
				z->parent->color = 'B';				//Case3
				z->parent->parent->color = 'R';		//Case3
				rotateR(z->parent->parent);			//Case3
			}
		}
		else{ //if z->parent = z->parent->parent->right
			y = z-> parent->parent->left;
			if(y->color == 'R'){
				z->parent->color = 'B';				//Case1
				y->color = 'B';						//Case1
				z->parent->parent->color = 'R';		//Case1
				z = z->parent->parent;				//Case1
			}
			else{
				if(z == z->parent->left){
					z = z->parent;					//Case2
					rotateR(z);						//Case2
				}
				z->parent->color = 'B';				//Case3
				z->parent->parent->color = 'R';		//Case3
				rotateL(z->parent->parent);			//Case3
			}
		}
	}
	root->color = 'B'; //Always set the root back to black
}

void RBT::rbtInsert(int value){ //Accepts the data and creates the node
	Tnode* y = rbtSearch(root, value);
	if(y == Nill ) {
		Tnode* n = new Tnode(value, Nill);
		createNode(n); //calls create node to actually insert the newly created node into the tree
	}
	else if(y->data == value){ //If the data already exists within the tree, tell the user
		std::cout<< "There is already a node which exists with similar data"<<std::endl;
	}
}

Tnode* RBT::Pred(Tnode* tmp){ // function which determines the predecessor of a node
	Tnode* y;
	if(tmp ->left != Nill){
		return Max(tmp);
	}
	else{
		y=tmp -> parent;
		
		while ( y!= Nill && tmp == y-> left){
			tmp = y;
			y = y -> parent;
		}
		return y; // trying to return a node as an int when return y
	}
}

Tnode* RBT::Min(Tnode* x){ //Function which determines the minimum
	Tnode* y=x;
	while (y->left != Nill){
		y= y->left;
	}
	return y;
}

Tnode* RBT::Max(Tnode* x){ //function whihc finds the max
	Tnode* y = x;
	while (y->right != Nill){
		y= y-> right;
	}
	return y;
}

Tnode* RBT::Successor(Tnode* tmp){//Used in the Delete function to determine the successor
	Tnode* y;
	if (tmp-> right != Nill){
		return Min(tmp->right);	
	}
	else{
		y= tmp-> parent;
		while (y!= Nill && tmp== y->right){
			tmp = y;
			y = y-> parent;
		}
	return y; //returns the node y
	}	
}

void RBT::rbtDelete(int num){	//Deletes the node based on what kind of node it might be and then calls fixup
	Tnode* y;
	Tnode* x;
	Tnode* temp = rbtSearch(root, num);
	if(temp != Nill){ //If the node which we want to delete exists
		if(temp-> left ==Nill || temp->right == Nill){
			y = temp;
		}
		else{
			y = Successor(temp);
		}
		if(y->left != Nill){
			x= y->left;
		}
		else{
			x= y-> right;
		}
		
		x->parent = y->parent;
		
		if(y->parent == Nill){
			root = x;
		}
		else if(y == y-> parent->left){
			y->parent->left = x;
		}
		else{
			y->parent->right = x;
		}
		if(y != temp){
			temp->data = y->data;
		}
		if(y->color == 'B'){
			dFixup(x);
		}
		delete y;
	}
	else{
		std::cout<<"The node which you are trying to delete already doesnt exist"<<std::endl;
	}
}

void RBT::rotateL(Tnode* node){ //rotates around a node to the left
	Tnode* y = node->right;
	node->right = y->left;
	if(y->left != Nill){
	y->left->parent = node;
	}
	y->parent = node->parent;
	
	if(node->parent == Nill){
		root = y;
	}
	else if(node == node->parent->left){
		node->parent->left = y;
	}
	else{
		node->parent->right = y;
	}
	y->left = node;
	node->parent = y;
}

void RBT::rotateR(Tnode* node){ //Rotates around a node to the right
	Tnode* y=node->left;		//
	node->left = y->right;
	y->right->parent = node;
	y->parent = node->parent;
	
	if(node->parent == Nill){
		root = y;
	}
	else if(node == node->parent->right){
		node->parent->right = y;
	}
	else{
		node->parent->left = y;
	}
	y->right = node;
	node->parent = y;
}

void RBT::dFixup(Tnode* iNode){ //Fixes up the tree after the delete function has been called
	Tnode* y;
	while(iNode != root && iNode->color == 'B'){	//while the node which is being deleted isnt the root and the parents color is black
		if(iNode == iNode->parent->left){
		
			y = iNode->parent->right;
			
			if(y->color == 'R'){
				y->color = 'B';					//Case1
				iNode->parent->color = 'R';		//Case1
				rotateL(iNode->parent);			//Case1
				y = iNode->parent->right;		//Case1
			}
			if(y->left->color =='B' && y->right->color =='B'){
				y->color = 'R';				//Case2
				iNode = iNode->parent;		//Case2
			}
			else{
				if( y->right->color== 'B'){
					y->left->color = 'B';		//Case3
					y->color = 'R';				//Case3
					rotateR(y);					//Case3
					y=iNode->parent->right;		//Case3
				}
				y->color = iNode->parent->color;	//Case4
				iNode->parent->color = 'B';			//Case4
				y->right->color = 'B';				//Case4
				rotateL(iNode->parent);				//Case4
				iNode=root;							//Case4
			}
		}
		else{ //x==x->parent->right
		
			y = iNode-> parent->left;
			
			if(y->color == 'R'){
				y->color = 'B';						//Case1
				iNode->parent->color = 'R';			//Case1
				rotateR(iNode->parent);				//Case1
				y = iNode->parent->left;			//Case1
			}
			if(y->right->color =='B' && y->left->color == 'B'){
				y->color = 'R';				//Case2
				iNode = iNode->parent;		//Case2
			}
			else{
				if(y->left->color =='B'){
					y->right->color = 'B';		//Case3
					y->color = 'R';				//Case3
					rotateL(y);					//Case3
					y = iNode->parent->left;	//Case3
				}
				y->color = iNode->parent->color;	//Case4
				iNode->parent->color = 'B';			//Case4
				y->left->color = 'B';				//Case4
				rotateR(iNode->parent);				//Case4
				iNode = root;						//Case4
			}
		}
	}
	iNode->color = 'B';		//Set the nodes color to black
}

void RBT::startPrint(std::string decisions){ //Decides which print order to execute
	Tnode* x = root;
	if(decisions == "a"){
		inorder(x);
	}
	else if(decisions =="b"){
		postorder(x);
	}
	else if(decisions =="c"){
		preorder(x);
	}
	else
		std::cout<<"Your decision was not accepted"<<std::endl;
}

void RBT::inorder(Tnode* tmp){ //Inorder print
	if(tmp!=Nill){
		inorder(tmp-> left);
		printNode(tmp-> data, tmp->color);
		inorder(tmp -> right);
	}
}

void RBT::preorder(Tnode* tmp){ //Preorder print
	if(tmp != Nill){
		printNode(tmp->data, tmp->color);
		preorder(tmp ->left);
		preorder(tmp -> right);
	}
}

void RBT::postorder(Tnode* tmp){ //Postorder print
	if(tmp != Nill){
		postorder(tmp ->left);
		postorder(tmp -> right);
		printNode(tmp->data, tmp->color);
	}
}

void RBT::printNode(int nodeD, char color ){ //Function actually prints the node's information
	std::cout <<"( "<< nodeD<<", "<<color<<" )"<< std::endl;
}
