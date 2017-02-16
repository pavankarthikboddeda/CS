#include "utils.h"

void insertionSort(vector<int> &a, bool order) {
  int n = a.size();
  for(int i = 0; i < n; i++){
    for(int j = i; j > 0; j--){
      if (order == 0){
        // increasing
        if(a[j] < a[j-1]){
          swap(&a[j],&a[j-1]);
        } else {
          break;
        }
      } else if (order == 1) {
        // decreasint
        if(a[j] > a[j-1]){
          swap(&a[j],&a[j-1]);
        } else {
          break;
        }
      }
    }
  }
}

void insertionSortOptimized(vector <int> &a, bool order) {
  int n = a.size();
  for(int i = 0;i < n; i++){
    vector<int> s = slice(a, 0, i-1);
    int position = findPositionUsingBinarySearch(s , 0, s.size()-1, a[i], order);
    int temp = a[i];
    for(int j = i-1;j >= position; j--){
      a[j+1] = a[j];
    }
    a[position] = temp;
  }
}
