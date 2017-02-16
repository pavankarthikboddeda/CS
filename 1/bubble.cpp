#include "utils.h"

void bubbleSort(vector<int> &a, bool order){
  int n = a.size();
  for(int iteration = 0; iteration < n; iteration++){
    for(int j = 0; j < n-1-iteration; j++){
      // sort ascending
      if(a[j] > a[j+1] && order == 0) {
        swap(&a[j],&a[j+1]);
      }
      // sort descending
      else if(a[j] < a[j+1] && order == 1) {
        swap(&a[j],&a[j+1]);
      }
    }
  }
}

void bubbleSortOptimised(vector<int> &a, bool order){
  int n = a.size();
  bool flag = true;
  for(int iteration = 0; iteration < n; iteration++){

    flag = false;

    for(int j = 0; j < n-1-iteration; j++){
      // sort ascending
      if(a[j] > a[j+1] && order == 0) {
        swap(&a[j],&a[j+1]);
        flag = true;
      }
      // sort descending
      else if(a[j] < a[j+1] && order == 1) {
        swap(&a[j],&a[j+1]);
        flag = true;
      }
    }

    // if no swap in an iteration array is sorted.
    if (flag == false) break;
  }
}
