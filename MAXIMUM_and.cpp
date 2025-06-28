#include <bits/stdc++.h>
using namespace std;

int checkbits(int pattern,int arr[],int n){
  int c=0;
  for(int i=0;i<n;i++){
    if((pattern&arr[i])==pattern){
      c++;
    }
  }
  return c;
}

int maximumand(int arr[],int n){
  int res=0,count;
  for(int i=32;i>=0;i--){
    count=checkbits(res|(1<<i),arr,n);
    if(count>=2){
      res=res|(1<<i);
    }
  }
  return res;
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<maximumand(arr,n);
  return 0;
}
