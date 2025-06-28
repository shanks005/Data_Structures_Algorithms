#include <iostream>
using namespace std;

void check_prime(int n){
  if(n==1){
    cout<<"neither prime nor composite"<<endl;
  }
  else if(n==2||n==3){
    cout<<"it is a prime number";
  }
  else if(n%2!=0&&n%3!=0){
    cout<<"it is a prime number";
  }
  else{
    int f;
    for(int i=5;i*i<=n;i++){
      if(n%i!=0&&n%(i+2)!=0){
        f=1;
      }
      else{
        f=0;
      }
    }
    if(f==1){
      cout<<"it is a prime number";
    }
    else{
      cout<<"it is not a prime number";
    }
  }
}
int main(){
  int n;
  cin>>n;
  check_prime(n);
  return 0;
}
