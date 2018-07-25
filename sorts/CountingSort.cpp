//CountingSort.cpp
//CountingSort member functions
//0-25 size 40
#include<iostream>
#include <cstdlib>
#include "CountingSort.h"

CountingSort::CountingSort(){ //Constructor which initializes the arrays into 0
	Comparisons = 0;
	for (int i =  0; i <40; i++){ //fills array A (the initial array) with rand numbers between 0- 24
		A[i] = rand() %25;
		std::cout<<i<<". "<<A[i]<<std::endl;
		Comparisons++;
	}
	for (int e =  0; e <25; e++){ // Fills array C with 0's
		C[e] = 0;
		Comparisons++;
	}
	for (int w =  0; w <40; w++){ //Fills array B with 0's
		B[w] = 0;
		Comparisons++;
	}
}

void CountingSort::Version1(){ //Version one of the counting sort
	for (int j = 0;  j < 40; j++){
		C[A[j]] = C[A[j]]+1;
		Comparisons++;
	}
	for(int y = 1; y < 25; y++){
		C[y] = C[y] + C[y-1];
		Comparisons++;
	}
	for (int x=39; x>=0; x--){
		B[C[A[x]]-1] = A[x];
		C[A[x]] = C[A[x]] - 1;
		Comparisons++;
	}
	for(int i =0; i<40;i++){ 	//Prints out the array
		std::cout<<i<<". "<<B[i]<<std::endl;
		Comparisons++;
	}
	std::cout<<"The number of comparisons for Counting Sort is: "<<Comparisons<<std::endl;
}

void CountingSort::Version2(){ //Version Two of the counting sort
	for(int j = 0; j<40; j++){
		C[A[j]] = C[A[j]] + 1;
		Comparisons++;
	}
	int i = 0;
	for(int l = 0; l<25;l++){ //loop that inputs the correct sort into A
		int m = C[l];
		Comparisons++;
		while(m>0){
			Comparisons++;
			A[i] = l;
			i++;
			m--; 
		}
	}
	for(int i =0; i<40;i++){  //outputs the correct array
		std::cout<<i<<". "<<A[i]<<std::endl;
		Comparisons++;
	}
	std::cout<<"The number of comparisons for Counting Sort is: "<<Comparisons<<std::endl;
}
