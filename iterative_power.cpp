#include <iostream>
using namespace std;
int powit(int a,int n){
  int res=1;
  while(n!=0){
    if(n%2==1){
      res*=a;
      n--;
  }
  else{
    a*=a;
    n/=2;
  }
}
return res;
}
int main(){
  int n,a;
  cin>>a>>n;
  cout<<powit(a,n);
  return 0;
}
