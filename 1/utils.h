#ifndef UTILS
#define UTILS

#include <vector>
#include <string>

using namespace std;
void swap(int *a, int *b);
void printArray(vector<int> &a);
vector<int> takeInput(string file);
int findPositionUsingBinarySearch(vector<int>& a,int l,int r, int val, bool order);
vector<int> slice (vector<int> a, int start, int end);

#endif
