#include<bits/stdc++.h>
using namespace std;
void print1toN(int N){
  if(N==0){
    return;
  }
  print1toN(N-1);
  cout<<N<<" ";
}
int main(){
  print1toN(5);
  return 0;
}
