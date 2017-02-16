#include "utils.h"
#include <cstdio>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
vector<int> takeInput(string infile){
  ifstream file(infile.c_str());
  int in;
  vector<int> array;
  while(file >> in) {
    array.push_back(in);
  };
  return array;
}
void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void printArray(vector<int> &a){
  for(int i = 0;i < a.size(); i++ ){
    cout << a[i] << " ";
  }
  cout << endl;
}

vector<int> slice (vector<int> a, int start, int end){
  if(end == -1){
    end = 0;
  }
  vector<int> b;
  for(int i = start; i <= end; i++){
    b.push_back(a[i]);
  }
  return b;
}

int findPositionUsingBinarySearch(vector<int>& a,int l,int r, int val, bool order){
  if (l <= r){
    if (order == 1){
      if (a[(l+r)/2] > val){
        findPositionUsingBinarySearch(a, (l+r)/2 + 1, r, val, order);
      } else if (a[(l+r)/2] < val) {
        findPositionUsingBinarySearch(a, l, (l+r)/2 -1, val, order);
      } else {
        return (l+r)/2;
      }
    } else {
      if (a[(l+r)/2] < val){
        findPositionUsingBinarySearch(a, (l+r)/2 + 1, r, val, order);
      } else if (a[(l+r)/2] > val) {
        findPositionUsingBinarySearch(a, l, (l+r)/2 -1, val, order);
      } else {
        return (l+r)/2;
      }
    }
  }
}
