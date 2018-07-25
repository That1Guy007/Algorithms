//QuickSort.cpp
//Member function of QuickSort

#include "QuickSort.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <utility>
//isnt ssorting correctly I suspect it is becuase of the pivots being incorrectly assigned in a specific range.
QuickSort::QuickSort(){
	Comparisons = 0;
	for(int i = 0; i <30; i++){
		Original[i] = rand() %100 +1; // initialize using random numbers between 1 - 100
		Comparisons++;
	}
	lastI = 29;
	iniI = 0;
}

// Generate a random number between min and max (inclusive)
// Assumes srand() has already been called
int QuickSort::getRandomNumber(int min, int max) // rand number between first index, and last index of the array or sub array
{ 
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); 
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

int QuickSort::Partition1(int x, int y ){ //x is the initial index while y is the last index
	randPivot = Original[y];
	int i = x - 1;
	
	for (int j = x; j<=y-1; j++){
		Comparisons++;
		if (Original[j] <= randPivot){
			Comparisons++;
			i++;
			std::swap(Original[i], Original[j]);
		}
	}
	std::swap(Original[i +1], Original[y]);
	return i+1;
}

int QuickSort::Partition2(int x, int y){ //Partitiion two of the Quick Sort
	randPivot = Original[getRandomNumber(x, y)];
	int i = x - 1;
	int j = y +1;
	while(i<j){
		Comparisons++;
		j--;
		while(Original[j] > randPivot){
			Comparisons++;
			j--;	
		}
		i++;
		while(Original[i]<randPivot){
			Comparisons++;
			i++;
		}
		if (i<j){
			Comparisons++;
			std::swap(Original[i], Original[j]);
		}
		else{
			return j;
		}
	}
}

void QuickSort::quickSortstart(){ //Starts the Quick Sort
	std::cout<<"Would you like to use Partition One (1) or Partition Two (2)?"<<std::endl;
	for(int test =0; test <30; test++){
		std::cout<<Original[test]<<std::endl;
	}
	std::string deci;
	std::cin>>deci;
	quickSort(deci, iniI, lastI);
	std::cout<<std::endl;
	for(int t =0; t <30; t++){
	Comparisons++;
		std::cout<<t<<". "<<Original[t]<<std::endl;
	}
	std::cout<<"The Number of comparisons in Quick sort is: "<<Comparisons<<std::endl;
}

int QuickSort::Randomized(int x, int y){ //Creates a rand pivot for use
	pivot = getRandomNumber(x, y);
	std::swap(Original[y], Original[pivot]);
	return Partition1(x,y);
}

void QuickSort::quickSort(std::string dec, int x, int y){ // Quick sort
	int j,i;
	i=x;
	j=y;
	if(dec =="1"){
		if(x < y){
			Comparisons++;
			prt = Randomized(i,j);
			quickSort("1", i, prt-1);
			quickSort("1", prt+1, j);
		}
	}
	else if(dec == "2"){
		if(x < y){
			Comparisons++;
			prt = Partition2(i, j);
			quickSort("2", i, prt);
			quickSort("2", prt+1, j);
		}
	}
	else{
		std::cout<<"failing";
	}
}
