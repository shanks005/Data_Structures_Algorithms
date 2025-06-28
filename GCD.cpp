#include <iostream>
using namespace std;
int GCD(int a,int b){
  int i=min(a,b),max;
  while(i>0){
    if(a%i==0&&b%i==0){
      break;
    }
    i--;
  }
  return i;
}
int main(){
  int a,b;
  cin>>a>>b;
  cout<<"The GCD of "<<a<<" & "<<b<<" is "<<GCD(a,b);
  return 0;
}
