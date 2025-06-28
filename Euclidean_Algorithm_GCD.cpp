#include <iostream>
using namespace std;

int Euclidean_GCD(int a,int b){
  while(a!=b){
    if(a>b){
      a=a-b;
    }
    else{
      b=b-a;
    }
  }
  return a;
}
int main(){
  int a,b;
  cin>>a>>b;
  cout<<"the GCD of "<<a<<" & "<<b<<" is "<<Euclidean_GCD(a,b)<<endl;
  return 0;
}
