//main.cpp
//Main function


#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>
#include "MST.h"

main(){
	MST objM; //MST object
	objM.Input();//Populates the data structure with data from the txt file
	objM.print();//Prints the data
	objM.Prims();//Applies Prims Algorithm
}
