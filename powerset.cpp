#include <bits/stdc++.h>
using namespace std;
void powerset(string s){
  int n=s.length();
  int size=pow(2,n);
  for(int i=0;i<size;i++){
    for(int j=0;j<n;j++){
      if((i&(1<<j))!=0){
        cout<<s[j];
      }
    }
    cout<<"\n";
  }
}
int main(){
  string s;
  cin>>s;
  powerset(s);
  return 0;
}
