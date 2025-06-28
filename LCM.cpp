#include <iostream>
using namespace std;
void LCM(int a,int b){
  int prod=a*b;
  while(a!=b){
    if(a>b){
      a=a-b;
    }
    else{
      b=b-a;
    }
  }
  int x=prod/a;
  cout<<x;
}
int main(){
  int a,b;
  cin>>a>>b;
  cout<<LCM(a,b);
  return 0;
}
