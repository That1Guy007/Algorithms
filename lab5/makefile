all: Lab5

Lab5: QuickSort.o CountingSort.o BucketSort.o Main.o
	g++ -std=c++11 QuickSort.o CountingSort.o BucketSort.o Main.o -o Lab5

QuickSort.o: QuickSort.cpp
	g++ -std=c++11 -c QuickSort.cpp

CountingSort.o: CountingSort.cpp
	g++ -std=c++11 -c CountingSort.cpp

BucketSort.o: BucketSort.cpp
	g++ -std=c++11 -c BucketSort.cpp
	
Main.o: Main.cpp
	g++ -std=c++11 -c Main.cpp
