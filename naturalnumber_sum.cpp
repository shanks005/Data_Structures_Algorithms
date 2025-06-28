#include <bits/stdc++.h>
using namespace std;

int sumofnums(int n,int sum){
  if(n==0){
    return sum;
  }
  else{
    return sumofnums(n-1,sum+n);
  }
}
int main(){
  cout<<sumofnums(4,0);
  return 0;
}
