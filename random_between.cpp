#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
  int min, max, randNum;

  cout<<"Enter minimum: ";
  cin>>min;
  cout<<"Enter maximum: ";
  cin>>max;

  //generate random integer between min and max
  randNum = rand() % max + min;
  cout<<randNum;

  return 0;
}
