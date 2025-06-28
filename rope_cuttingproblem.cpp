#include <bits/stdc++.h>
using namespace std;

int ropecutting(int n,int a,int b,int c){
  int res;
  if(n==0){
    return 0;
  }
  else if(n<0){
    return -1;
  }
  else{
    res=max(ropecutting(n-a,a,b,c),max(ropecutting(n-b,a,b,c),ropecutting(n-c,a,b,c)));
  }
  if(res==-1){
    return res;
  }
  return res+1;
}
int main(){
  cout<<ropecutting(9,1,1,1);
  return 0;
}
