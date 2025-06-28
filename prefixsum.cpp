#include <bits/stdc++.h>
using namespace std;

int prefixsum(int arr[],int n,int l,int r){
	int prefix[n];
	prefix[0]=arr[0];
	for(int i=1;i<n;i++){
		prefix[i]=prefix[i-1]+arr[i];
	}
	if(l==0){
		return prefix[r]; 
	}
	else{
		return prefix[r]-prefix[l-1];
	}
}
int main(){
	int arr[]={2,8,3,9,6,5,4};
	int n=7;
	cout<<prefixsum(arr,n,1,3)<<endl;
	return 0;
}
