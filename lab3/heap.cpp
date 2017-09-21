//heap.cpp
//Member function definitions for heap class

#include <iostream>
#include <cstdlib>
#include <string>
#include "heap1.h"

int index = 0;

using namespace std;


Heap::Heap(){  //constructor 
	H_arr[100]; //Heap_array of size 100
    heapSize = 10; //size of the heap array
	BuildHeap();  //Calls the build heap function
}
 
void Heap::Insert(int Element){  //Insert 
  //cout<<heapSize<<endl; 
  heapSize++;  //increments the heap size
  index = heapSize - 1; // Highest index of the Heap
  while (index > 0 && H_arr[Parent(index)] < Element){
    H_arr[index] = H_arr[Parent(index)];
    index = Parent(index);
  }
  H_arr[index] = Element;// Copy the element into the right location
  //cout<<heapSize<<endl;
}

void Heap::HeapSort(){ //Heap sort that sorts the heap
  BuildHeap(); // call build heap function
  int var= heapSize; //save original heap size 
  for(int x = heapSize-1; x>0; x--){ //for loop that swaps the variables 
      swap(H_arr[0] , H_arr[x]);
	  heapSize--;
      Heapify(0);
  }
  heapSize =var; // sets heap size back to the original value
}


int Heap::ExtractMax(){ // extracts the maximum value 
	int maxi;
  if(heapSize <1){
    cout<<"Error: Heap Underflow"<< endl;  // catches an error
  }
  else{
    maxi = H_arr[0];
    H_arr[0] = H_arr[heapSize -1];
    heapSize--;
    Heapify(0);
  return maxi;  //returns the maximum determined value
  }
}

void Heap::PrintHeap(){ //Prints out the current heap
	//cout<<heapSize<<endl;
  for(int arr = 0; arr < heapSize; arr++){ //for loop that grabs the value then prints out the value  
    cout<< H_arr[arr]<<endl;
  }
}

int Heap::Parent(int i){  //Parent function returs the index of the parent node
  if(i%2 ==0){
    return((i-1)/2);
  }
  else{
    return (i/2);
  }
}

int Heap::LeftChild(int l){  //Returns the left child index
  return(2 * l +1);
}

int Heap::RightChild(int r){  //Returns the right child index
  return(2 * r +2);
}

void Heap::Heapify(int i){  //Heapify 
	int Left = LeftChild(i);
	int Right = RightChild(i);
	int Largest;
	if ( Left <= heapSize-1 && H_arr[Left] > H_arr[i]){
		Largest = Left;
	}
	else{
		Largest = i;
	}
	if (Right <= heapSize-1 && H_arr[Right] > H_arr[Largest]){
		Largest = Right;
	}
	if( Largest != i){
		swap(H_arr[i], H_arr[Largest]);
		Heapify(Largest);
	}
}

void Heap::BuildHeap(){  // builds heap
	for(index = ((heapSize/2)); index >=1; index--){
		Heapify(index-1);
	}
}

int main(){ //Dont forget the () after main
	Heap obj;
	string answer;
	int ele;
	int exit = 0;
	while(exit == 0){
		cout<< "Insert element into the heap. (1)"<<endl;
		cout<<"Retrieve Maximun Value (2)"<<endl;
		//cout<<"Extract maximum elements from the heap (3)"<<endl;
		cout<<"Print heap (3)"<<endl;
		cout<<"Heap sort(4)"<<endl;
		cout<<"Exit (0)"<<endl;
		cin>>answer;
		if(answer == "1"){
			cout<<"please enter a number to insert into the heap"<<endl;
			cin>>ele;
			obj.Insert(ele);
		}
		else if(answer =="2"){
			cout<<"The maximum in the heap is: " << obj.ExtractMax()<<endl;
		}
		else if(answer == "3"){
			obj.PrintHeap();
		}
		else if (answer == "4"){
			obj.HeapSort();
			obj.PrintHeap();
			exit = 1;
		}
		else
			exit =1;
	}
	return 0;
}
