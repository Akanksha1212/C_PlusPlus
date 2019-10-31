#include <iostream>
using namespace std;
void bubbleSort(int array[], int size)
{
  for (int step = 0; step < size - 1; ++step)
  {
    for (int i = 0; i < size - step - 1; ++i)
    {
      if (array[i] > array[i + 1])
      {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}
void printArray(int array[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    cout << "  " << array[i];
  }
  cout << "\n";
}
int main()
{
  int N;
  cout << "Enter Number of Elements:\n";
  cin >> N;
  cout << "Enter " << N <<" Elements giving space in between:";
  int data[N];
  for(int a=0;a<N;a++){cin >> data[a];}
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
  cout << "Sorted Array in Ascending Order:\n";
  printArray(data, size);
}
