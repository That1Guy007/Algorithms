//QuickSort.h
//Structure of QuickSort


#ifndef QUICKSORT
#define QUICKSORT

#include <string>

class QuickSort{
private:
	int Original[30];
	int pivot;
	int pivotI;
	int lastI;
	int iniI;
	int randPivot;
	int prt;
	int Comparisons;
public:
	QuickSort();
	int getRandomNumber(int, int);
	int Partition1(int, int);
	int Partition2(int, int);
	void quickSortstart();
	int Randomized(int, int);
	void quickSort(std:: string, int, int);
};

#endif
