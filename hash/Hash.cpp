//Hash.cpp
//member functions of Hash.h
#include "Hash.h"
#include<iostream>
#include<cstdlib>

Hash::Hash(){		//Hash default constructor
	for(int i = 0; i<20; i++){
		Htable[i] = NULL; //Creates table with 20 diff pointers and sets them to NULL by default
	}
}
Hash::~Hash(){ //hash destructor
	std::cout<<"deconstructor"<<std::endl;
}

void Hash::printNodes(){		//print the Hash table
	Hnode* print;
	for(int i = 0; i< 20; i++){
		print = Htable[i];
		while(print !=NULL){  		//checks to see if the index of the table is null 
			std::cout<<print->value<<", ";
			print = print->next;	
		}
		std::cout<<std::endl;
	}
}

int Hash::Hfunction(int data){ //Hash Function which determines the mod of the data
	int index = data % 20;
	return index;
}

Hnode* Hash::Search(int data){		//search that return the node which you are looking for
	int i = Hfunction(data);
	search = new Hnode;
	search = Htable[i];
	if(search == NULL){		//If there is no data within the hash tables index
		return search;
	}
	else{		//if there is already data within the htables index
		while(true){		
			
			if (search-> value == data){
				std::cout<<"Element: " << data<<" Exists in slot: " << i<< std::endl;
				return search;
			}
			else if(search->next == NULL){
				std::cout<<data<<" Does not exist"<<std::endl;
				return search->next;
			}
			else{ 
				psearch = search;
				search = search-> next;
			}
		}
	}
}
 
void Hash::Insert(int data){
	Hnode* temp;		//Inserts a new node with the data requested as long as that data is not already within the Htable
	Hnode* insert;
	int x = Hfunction(data);
	Hnode* life = Search(data);	
	Hnode* nNode;	
	if(life == NULL){
		nNode = new Hnode;
		nNode->value = data;
		//nNode->next = NULL;
		if(Htable[x] == NULL){
			//std::cout<<"unicorn";
			Htable[x] = nNode;
		}
		else{
			insert = Htable[x];
			temp = insert;
			while(insert != NULL && insert -> value <= data) {
					temp = insert;
					insert = insert -> next;
			}
			if(insert == Htable[x]){
				nNode -> next = insert;
				Htable[x] = nNode;
			}
			else{
				temp -> next = nNode;
				nNode->next = insert;
			}
		}
	}
	else{
		std::cout<<"The data which you want to enter already exists in slot: " << Hfunction(data)<<std::endl;
	}
}

void Hash::Delete(int data){ //Deletes the node and connects its predessesor to its succesor
	Hnode* magic;
	magic = Search(data);
	int x = Hfunction(data);
	if(magic != NULL){		//If the data exists within the Htable, then there are three cases
		if(magic == Htable[x] && magic ->next == NULL){
			Htable[x] = NULL;
		}
		else if(magic==Htable[x] && magic->next !=NULL) {
			Htable[x] = magic-> next;
		}
		else{
			psearch -> next = search->next;
		}
		//delete magic; //deletes the node
	}
	else{
		std::cout<<"The element you are looking to delete already doesnt exist in the hash table"<<std::endl;
	}
}


