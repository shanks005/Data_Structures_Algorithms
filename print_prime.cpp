#include <iostream>
using namespace std;

bool isPrime(int n){
  int i;
  if(n==1){
    return false;
  }
  else if(n==2||n==3){
    return true;
  }
  else if(n%2==0||n%3==0){
    return false;
  }
  else{
    for(int i=5;i*i<=n;i+=6){
      if(n%i==0||n%(i+2)==0){
        return false;
      }
      else{
        return true;
      }
    }
  }
}
int main(){
  int i,n;
  cin>>n;
  for(i=2;i<=n;i++){
    if(isPrime(i)){
      cout<<i<<" ";
    }
  }
  return 0;
}
