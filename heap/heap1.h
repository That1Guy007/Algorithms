//heap1.h
//Declaration of heap class
// member functions are defined in heap.cpp

//prevent multiple inclulsions of header file
#ifndef HEAP1_H
#define HEAP1_H

  // Heap class
class Heap {
public:
  Heap();
  void Insert(int);
  void HeapSort();
  int ExtractMax();
  void PrintHeap();
private:
//Private member attributes
  int H_arr[100]= {4, 12, 3, 19, 23, 5, 32, 11, 2 , 24};
  int heapSize;
//Private member utility
  int Parent(int);
  int LeftChild(int);
  int RightChild(int);
  void Heapify(int);
  void BuildHeap();
};

#endif

