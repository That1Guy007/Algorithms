//Main.cpp

#include <iostream>
#include <string>
#include <cstdlib>
#include "QuickSort.h"
#include "BucketSort.h"
#include "CountingSort.h"

using namespace std;

main(){
	string decision; 
	string input;
	QuickSort objQ;
	BucketSort objB;
	CountingSort objC;
	do{
	cout<<"\nWhich Sorting Algorithm would you like to implement?"<<endl;
	cout<<"Quick Sort (1) \nBucket Sort (2)\nCounting Sort (3)\nPress Zero to Exit"<<endl;
	cin>>decision;
	if(decision == "1"){
		objQ.quickSortstart();
	}
	else if(decision == "2"){
		objB.bucketSort(); 
	}
	else if(decision == "3"){
		cout<<"Would you like to see Version one (1) or Version two (2)?"<<endl;
		cin>>input;
		if(input =="1"){
			objC.Version1();
		}
		else if(input == "2"){
			objC.Version2();
		}
		else{
			cout<<"That was the incorrect input"<<endl;
		}
	}
	else{
		if(decision != "0"){
			cout<<"You have entered an incorrect input please retype your decision"<<endl;
		}
	}
	}while(decision != "0");
}
