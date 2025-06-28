#include <bits/stdc++.h>
using namespace std;
int countbits(int n){
  int c=0,d=1;
  for(int i=1;i<=n;i*=2){
    if((n&i)!=0){
      c++;
    }
  }
  return c;
}
int main(){
  int n;
  cin>>n;
  cout<<countbits(n);
  return 0;
}
