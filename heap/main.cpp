#include <iostream>
#include <cstdlib>
#include <string>
#include "heap1.h"

using namespace std;

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