#include <bits/stdc++.h>
using namespace std;

void subsets(string s,string s1,int a){
  if(a==s.length()){
    cout<<s1;
    return;
  }
  subsets(s,s1,a+1);
  subsets(s,s1+s[a],a+1);
}
int main(){
  subsets("ABC"," ",0);
  return 0;
}
