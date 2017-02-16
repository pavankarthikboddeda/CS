#include "utils.h"
#include "bubble.h"
#include "insertion.h"
#include <cstdio>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

// void swap(int *a, int *b);
// void printArray(vector<int> &a);
// vector<int> takeInput(string file);
// int findPositionUsingBinarySearch(vector<int>& a,int l,int r, int val, bool order);
// vector<int> slice (vector<int> a, int start, int end);

// void bubbleSort(vector<int> &a, bool order);
// void bubbleSortOptimised(vector<int> &a, bool order);
// void insertionSort(vector<int> &v, bool order);
// void insertionSortOptimized(vector<int> &v, bool order);


int main (int argc, char *argv[]){

   vector<int> array = takeInput("file.txt");
   bool order;
   (argc == 2) ? order = atoi(argv[1]) : order = 0 ;
   bubbleSort(array,order);
   printArray(array);

}
