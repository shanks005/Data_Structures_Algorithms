#include <iostream>
using namespace std;

int trailingzeroes(int n){
  int i=5,res=0;
  while(i<=n){
    res+=n/i;
    i*=5;
  }
  return res;
}
int main(){
  int n;
  cin>>n;
  cout<<trailingzeroes(n);
  return 0;
}
