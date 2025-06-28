#include <bits/stdc++.h>
using namespace std;
bool poweroftwo(int n){
  int f=0;
  if(n==0){
    return false;
  }
  else{
    return((n&(n-1))==0)
  }
int main(){
  int n;
  cin>>n;
  cout<<poweroftwo(n);
  return 0;
}
