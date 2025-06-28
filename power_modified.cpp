#include <iostream>
using namespace std;
int powermod(int a,int n){
  if(n==0){
    return 1;
  }
  int temp=powermod(a,n/2);
  temp=temp*temp;
  if(n%2==0){
    return temp;
  }
  else{
    return temp*a;
  }
  return 0;
}
int main(){
  int a,n;
  cin>>a>>n;
  cout<<powermod(a,n);
  return 0;
}
