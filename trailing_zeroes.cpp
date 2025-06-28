#include <iostream>
using namespace std;

int trailing_zeroes(int fact){
  int c=0;
  while(fact!=0){
    if(fact%10==0){
      c++;
      fact/=10;
  }
  else{
    break;
  }
}
return c;
}

int main(){
  int n,prod=1;
  cout<<"enter a number"<<endl;
  cin>>n;
  while(n!=0){
    prod*=n;
    n--;
  }
  cout<<"the trailing zeroes in "<< prod<<" is "<<trailing_zeroes(prod)<<endl;
  return 0;
}
