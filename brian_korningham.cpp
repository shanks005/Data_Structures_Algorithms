// C++ program to Count set
// bits in an integer
#include <bits/stdc++.h>
using namespace std;
int table[256];

void initialize(int n){
  table[0]=0;
  for(int i=1;i<256;i++){
    table[i]=table[i&(i-1)]+1;
  }
}

int countsetbit(int n){
  return table[n&255]+table[(n>>8)&255]+table[(n>>16)&255]+table[n>>24];
}

int main(){
  int n;
  cin>>n;
  initialize(n);
  cout<<countsetbit(n);
  return 0;
}
