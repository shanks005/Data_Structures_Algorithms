#include <iostream>
using namespace std;

int countDigits(int n){
  int i=0;
  while(n!=0){
    n/=10;
    i++;
  }
  return i;
}
int main(){
  int n;
  cout<<"enter the number"<<endl;
  cin>>n;
  cout<<"the count of digits is"<<countDigits(n)<<endl;
  return 0;
}
