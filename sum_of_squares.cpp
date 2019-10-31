// Program to find sum of square of first n natural numbers 
#include <bits/stdc++.h> 
using namespace std; 
  
// Return the sum of the square  
// of first n natural numbers, where n is entered by the user


int squareSum(int n) 
{ 
    // Iterating i from 1 and n and adding to sum in each iterations.

    int sum = 0; 
    for (int i = 1; i <= n; i++) 
        sum += (i * i); 
    return sum; 
} 
  

int main() 
{ 
    int num; 
    cout<<"Enter the value for n : ";
	cin>>num;
    cout << squareSum(num) << endl; 
    return 0; 
} 
