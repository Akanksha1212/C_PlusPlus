#include<iostream>

using namespace std;

int main()
{
    int x, y;
    cout<<"Enter the first number\t";
    cin>>x;
    cout<<"\nEnter the second number\t";
    cin>>y;
    x = x + y; 
    y = x - y;
    x = x - y;
    cout<<"After Swapping first number = "<<x<<" second number = "<<y;
    return 0;
}