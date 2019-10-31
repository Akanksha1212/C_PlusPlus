#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n]={};
  a[0]=0;
  a[1]=1;
  if(n<=2){
    cout<<a[n-1]<<endl;;
  }
  else{
    for(int i=2;i<n;i++){
      a[i]=a[i-1]+a[i-2];
    }
    cout<<a[n-1]<<endl;
  }
  return 0;
}
