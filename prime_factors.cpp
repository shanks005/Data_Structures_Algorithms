#include <iostream>
using namespace std;
void primefact(int n){
  if(n<=1){
    return;
  }
  while(n%2==0){
    cout<<2<<" ";
    n/=2;
  }
  while(n%3==0){
    cout<<3<<" ";
    n/=3;
  }
  for(int i=5;i*i<=n;i+=6){
    if(n%i==0){
      cout<<i<<" ";
      n/=i;
    }
    else if(n%(i+2)){
      cout<<i+2<<" ";
      n/=i+2;
    }
  }
}
int main(){
  int n;
  cin>>n;
  primefact(n);
  return 0;
}
