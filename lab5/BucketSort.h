//BucketSort.h
//structure of bucketsort

#ifndef BUCKETSORT
#define BUCKETSORT

class BucketSort{
private:
	int SizeArr;
	int number;
	int Insert_comp;
	int Comparisons;
	int counter;
	int counter1;
	int counter2;
	int counter3;
	int counter4;
	int counter5;
	int counter6;
	int counter7;
	int counter8;
	int counter9;
	int	finalArr[100];
	int Arr0_9[20]; 
	int Arr10_19[20];
	int Arr20_29[20];
	int Arr30_39[20];
	int Arr40_49[20];
	int Arr50_59[20];
	int Arr60_69[20];
	int Arr70_79[20];
	int Arr80_89[20];
	int Arr90_99[20];
	int cnt;
public:
	BucketSort();
	void InsertionSort(int, int Arr[]);
	void Concate(int, int arr[]);
	void bucketSort();
};
#endif
