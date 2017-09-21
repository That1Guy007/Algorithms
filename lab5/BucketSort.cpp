//BucketSort.cpp
//member functions of Bucket Sort

#include "BucketSort.h"
#include <iostream>
#include <cstdlib>


BucketSort::BucketSort(){ //Constructor which initializes arrays, variables and inserts the elements into the bucket
	counter = 0;
	counter1 = 0;
	counter2 = 0;
	counter3 = 0;
	counter4 = 0;
	counter5 = 0;
	counter6 = 0;
	counter7 = 0;
	counter8 = 0;
	counter9 = 0;
	cnt = 0;
	Comparisons = 0;
	
	for (int i =0; i < 100; i++){  //creates 100 rand numbers and inserts them into the buckets
		finalArr[i] = 0;
		number = rand() % 100;
		if (number<10){
			Arr0_9[counter] = number; 
			counter++; 
		}
		else if(number >=10 & number <20){
			Arr10_19[counter1] = number; 
			counter1++;
		}
		else if(number >= 20 & number<30){
			Arr20_29[counter2] = number; 
			counter2++;
		}
		else if(number >= 30 & number<40){
			Arr30_39[counter3] = number; 
			counter3++;
		}
		else if(number>= 40 & number <50){
			Arr40_49[counter4] = number; 
			counter4++;
		}
		else if(number >= 50 & number <60){
			Arr50_59[counter5] = number; 
			counter5++;
		}
		else if(number>= 60 & number<70){
			Arr60_69[counter6] = number; 
			counter6++;
		}
		else if(number >= 70 & number <80){
			Arr70_79[counter7] = number; 
			counter7++;
		}
		else if(number >= 80 & number <90){
			Arr80_89[counter8] = number; 
			counter8++;
		}
		else if(number >= 90 & number <100){	
			Arr90_99[counter9] = number; 
			counter9++;
		}
	}
	Insert_comp = 0;
}

void BucketSort::InsertionSort(int cont, int Arr[]){ // insetrtion sort
	int data, i, j;
	for(j = 0; j<cont; j++){
		i= j;
		Insert_comp++;
		while(i>0 && Arr[i-1] > Arr[i]){
			data = Arr[i];
			Arr[i] = Arr[i-1];
			Arr[i-1] = data;
			i--;
			Insert_comp++;
		}
	}
}

void BucketSort::Concate(int cnter, int arr[]){ //puts the buckets into the final array of 100 elements
	
	for (int i = 0; i < cnter ; i++){ 
		finalArr[cnt] = arr[i];
		cnt++;
		Comparisons++;
	}
}

void BucketSort::bucketSort(){  //Insertion sorts each bucket and concates the arrays

	InsertionSort(counter, Arr0_9);
	InsertionSort(counter1, Arr10_19);
	InsertionSort(counter2, Arr20_29);
	InsertionSort(counter3, Arr30_39);
	InsertionSort(counter4,Arr40_49);
	InsertionSort(counter5, Arr50_59);
	InsertionSort(counter6, Arr60_69);
	InsertionSort(counter7, Arr70_79);
	InsertionSort(counter8, Arr80_89);
	InsertionSort(counter9, Arr90_99);
	
	
	Concate(counter,Arr0_9);
	Concate(counter1, Arr10_19);
	Concate(counter2, Arr20_29);
	Concate(counter3, Arr30_39);
	Concate(counter4, Arr40_49);
	Concate(counter5, Arr50_59);
	Concate(counter6, Arr60_69);
	Concate(counter7, Arr70_79);
	Concate(counter8, Arr80_89);
	Concate(counter9, Arr90_99);
	
	for(int x = 0; x<100; x++){
		std::cout<<x<<". "<<finalArr[x]<<std::endl;
		Comparisons++;
	}
	std::cout<<"The number of comparisons for Bucket Sort is: "<<Comparisons+Insert_comp+counter+(counter1*2)+
	(counter2*3)+(counter3*4)+(counter4*5)+(counter5*6)+(counter6*7)+(counter7*8)+(counter8*9)+(counter9*10)<<std::endl;
	
}

