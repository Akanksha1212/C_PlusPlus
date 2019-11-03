#include<iostream>

using namespace std;
void swapping(int &x, int &y) {        
   int temp;
   temp = x;
   x = y;
   y = temp;
}
void display(int *arr, int size) {
   for(int i = 0; i<size; i++)
      cout << arr[i] << " ";
   cout << endl;
}
void selectionSort(int *arr, int size) {
   int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;  
      for(j = i+1; j<size; j++)
         if(arr[j] < arr[imin])
            imin = j;
         swap(arr[i], arr[imin]);
   }
}
int main() {
   int n;
   cout << "Enter the no of elements: ";
   cin >> n;
   int arr[n];          
   cout << "Enter the elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   selectionSort(arr, n);
   cout << "Sorted array: ";
   display(arr, n);
}
