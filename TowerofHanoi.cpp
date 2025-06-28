#include <bits/stdc++.h>
using namespace std;

void towerofhanoi(int n,char A,char B,char C){
  if(n==1){
    cout<<"Move 1 from "<<A<<" to "<<C<<endl;
  }
  else{
    towerofhanoi(n-1,A,C,B);
    cout<<"Move "<<n<<" from "<<A<<" to "<<C<<endl;
    towerofhanoi(n-1,B,A,C);
  }
}
int main(){
  towerofhanoi(3,'A','B','C');
  return 0;
}
