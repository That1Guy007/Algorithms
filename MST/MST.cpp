//MST.cpp
//MST class memebr functions

#include "MST.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <cstring>
#include <fstream>

MST::MST(){ //default constructor which initializes the size of the graph and the 2d array
	std::cout<<"Please enter the amount of nodes in your graph: ";
	std::cin>>size;
	nodes = new std::string*[size];
	for(int i = 0; i<size;++i){
		nodes[i] = new std::string[size];
	}
}

MST::~MST(){


}

void MST::Input(){ //populates the data structure with the data from the text file
	std::string test;
	std::ifstream File("test.txt");
	if(File.is_open()){
		for(int x = 0; x<size; x++){
			for(int i = 0; i<size;i++){
				File>>nodes[x][i];
			}
		}
	} 
	File.close();
}

void MST::print(){ //prints the data given
	for(int y =0; y<size; y++){
		for(int t = 0; t<size; t++){
			std::cout<<nodes[y][t]<< " ";
		}
		std::cout<<std::endl;
	}
}


void MST::Prims(){ //impliments prims algorithm 
	bool V[size]; //boolean array which keeps track of the nodes and whether or not they have been used or not.
	int minTree[size][size]; //final array which keep sthe min spanning tree data
	int min; //holds the minimum weight
	int u,v, weight; //temp variables to hold the values that state which node and connection will be used as well as their weight
	
	for(int i = 0; i<size; i++){ // Initialize the V array to all false
		V[size] = false;
	}
	for(int y =0; y<size; y++){ //initialize MST to 0
		for(int t = 0; t<size; t++){
			minTree[y][t] = 0;
		}
	}
	std::cout<<std::endl;
	V[0] = true; //Set the first node as being used in the MST
	V[8] = false; //HOTFIX, code was stating that V[8] was true when it clearly has been set to false
	
	// Actually impliments the algorithm
	
	for(int x = 0; x<size; x++){ // this loop goes through for each and every node contained within the graph
		min = 0; //reset the min value each iteration to find the next new minimum value for the MST
		v = 0;
		for(int z = 0; z<size; z++){ //This for loop along with the nested for loop goes through the data searching for the smallest value branching off the used nodes
			if(V[z] == true ){ //Only looks at the nodes which have been used (connected for the MST)
				for(int y = 0; y<size; y++){
					if(V[y] == false && stoi(nodes[z][y]) != 0 ){ //if the nodes has yet to be used and there is a connection
						if(min == 0 ){ //the min is set to zero by default so we need to change it with the value of the first connection we find
							min = stoi(nodes[z][y]);
							v = y;
							u= z;
						}
						else if (stoi(nodes[z][y]) < min && stoi(nodes[z][y]) != 0 && V[y] == false){ //This ensures that the min connection is truly the smallest weighted branch
							min = stoi(nodes[z][y]);
							v = y;
							u = z;
						}
					}
				}
			}
		}
	minTree[u][v] = min; //Puts the accepted weighted branch into the MST
	V[v] = true; //Set the connected node as true meaning that yes it has been used
	}
	weight = 0; // keeps track of the weight
	for(int y =0; y<size; y++){ //prints out the MST connections and the weight
		for(int t = 0; t<size; t++){
			if(minTree[y][t] != 0){
				std::cout<<"Node " << y<<" is connected to Node "<<t<<" with weight "<< minTree[y][t]<<std::endl;
				weight += minTree[y][t];
			}
		}
	}
	std::cout<<std::endl<<"the weight of this MST is : " <<weight<<std::endl;
}
