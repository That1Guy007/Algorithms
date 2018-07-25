//BST.cpp
//define the member funcstions of BST
#include <iostream>
#include <string>
#include "BST.h"

void BST::createNode(){
	y = NULL; //sets y equal to NULL. y is a temp pointer to hold the previous nodes info.
	x = root; //temporary pointer which holds the roots information
	while ( x != NULL){ // while loop which checks to see if the BST has been initialized yet. If it has then it runs
		//std::cout<<"root isnt null";
		y=x;  //sets y again which hols the parent value (previous node info)
		if ( n->data < x->data){  //if the new nodes inserted data is less than the roots data then looks at the left child
			x = x->left;
		}
		else{  //if the new nodes data is greater then the roots data then it looks at the right child
			x = x->right;
		}
	}
	n->parent = y; //links the new nodes parent as y
	if(y==NULL){  //if y doesnt exist then the new node become the root of the BST
		std::cout<<"Ini root";
		root = n;
		x = root;
	}
	else if (n->data < y->data){  //if the new nodes data is less than the previosu nodes data, 
	    //std::cout<<"the data is less than the roots";                          then set the left child of the previous node to the new node
		y->left = n;
	}
	else{  // if the new nodes data is greater then the previous nodes data then the new node is the right child of the parent
		y->right = n;
	}
}

int BST::Pred(Tnode* tmp){ // who uses this function?
	if(tmp ->left != NULL){
		return Max(tmp -> left);
	}
	else{
		y=tmp -> parent;
		
		while ( y!= NULL && tmp == y-> left){
			tmp = y;
			y = y -> parent;
		}
		return y->data; // trying to return a node as an int when return y
	}
}

Tnode* BST::Min(Tnode* x){
	y=x;
	while (y->left != NULL){
		y= y->left;
	}
	return y;
}

Tnode* BST::Successor(Tnode* tmp){//Used in the Delete function 
	if (tmp-> right != NULL){
		return Min(tmp->right);
	}
	else{
		y= tmp-> parent;
		while (y!= NULL && tmp== y->right){
			tmp = y;
			y = y-> parent;
		}
	return y; //returns the node y
}
}

int BST::Max(Tnode* x){
	y=x;
	while (y->right != NULL){
		y= y-> right;
	}
	return y-> data;
}

BST::BST(){
	root = NULL;
	x = root;
	t=NULL;
}

BST::~BST(){
	
}

void BST::startPrint(std::string decisions){ //pass in option to choose which print function to use
	x = root;
	//put if else statements in order to choose which gets printed
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

void BST::inorder(Tnode* tmp){
	/*int test;
	test = x-> data;
	std::cout<<test;*/ //prints out tree in order 
	if(tmp!=NULL){
		inorder(tmp-> left);
		printNode(tmp-> data);
		inorder(tmp -> right);
	}
}

void BST::preorder(Tnode* tmp){
	if(tmp != NULL){
		printNode(tmp->data);
		preorder(tmp ->left);
		preorder(tmp -> right);
	}
}

void BST::postorder(Tnode* tmp){
	if(tmp != NULL){
		postorder(tmp ->left);
		postorder(tmp -> right);
		printNode(tmp->data);
	}
}

void BST::bstInsert(int insert2){//creates the new node with the given data
	//std::cout<<"test";
	y = bstSearch(insert2);
	if(y == NULL) {
		//std::cout<<"NULL"; //solves the issue of dereferencing the pointer x
		n = new Tnode;
		n->data = insert2;
		createNode();
	}
	else if(y->data == insert2){
		std::cout<< "There is already a node which exists with similar data"<<std::endl;
	}
	else{
		n = new Tnode;
		n->data = insert2;
		createNode();
	} // puts the new node in its proper place and then links it
	//std::cout<<"Working?";
}

void BST::bstDelete(int remove){
	Tnode* ran = NULL;
	t = bstSearch(remove);
	ran = t;
	if(ran ==NULL ||t ==NULL){
		std::cout<<"The element which you are trying to remove doesnt not exist"<<std::endl;
	}
	else if(ran->data == remove){
		if(t->left == NULL || t->right ==NULL){
			ran = t;
		}
		else{
			ran = Successor(t);
		}
		if(ran->left != NULL){
			bc = ran->left;
		}
		else{
			bc = ran->right;
		}
		if( bc != NULL){
			bc->parent = ran->parent;
		}
		if (ran->parent == NULL){
			root  = bc;
			x = root;
		}
		else if(ran== ran -> parent -> left){
			ran-> parent ->left = bc;
		}
		else{
			ran-> parent ->right = bc;
		}
		if(ran != t){
			t -> data = ran -> data;
		}
		delete ran;
	}
	else{
		std::cout<<"The element which you are trying to remove doesnt not exist"<<std::endl;
	}
}

Tnode* BST::bstSearch(int insert3){ 
	//std::cout<<"WTF";
	x = root;
	Tnode* idc = x;
	while(idc != NULL && insert3 != idc -> data){
		//std::cout<<"wtf2.0";	
		if(insert3 < idc -> data){
			if(idc -> left != NULL){
				idc= idc->left;
				}
			else{
				return idc;
			}
		}
		else{
			if(idc->right !=NULL){
				idc = idc->right;
			}
			else{
				return idc;
			}
		}
		//printNode(t->data);	
	} 
	return idc;//returning a pointer as a void
}
