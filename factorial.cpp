#include <iostream>
using namespace std;

long long int factorial(int n){
  long int prod=1;
  while(n!=0){
    prod*=n;
    n--;
  }
  return prod;
}
int main(){
  int n;
  cout<<"enter a number"<<endl;
  cin>>n;
  cout<<"the factorial of "<< n <<" is "<<factorial(n)<<endl;
  return 0;
}
