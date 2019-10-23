#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter the first number\t";
cin>>a;
cout<<"\nEnter the second number\t";
cin>>b;
c=a;
a=b;
b=c;
cout<<"First number is\t"<<a;
cout<<"\nSecond number is\t<<b;
return 0;
}