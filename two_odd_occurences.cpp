#include <bits/stdc++.h>
using namespace std;
void twoodd(int arr[],int n){
  int res1=0,res2=0;
  for(int i=0;i<n;i++){
    if((arr[i]&1)!=0){
      res1=res1^arr[i];
    }
    else{
      res2=res2^arr[i];
    }
  }
  cout<<res1<<" "<<res2;
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  twoodd(arr,n);
  return 0;
}
