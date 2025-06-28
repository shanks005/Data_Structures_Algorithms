#include <bits/stdc++.h>
using namespace std;

int weightsum(int arr[],int n,int l,int r){
	int prefix[n];
	prefix[0]=arr[0];
	for(int i=1;i<n;i++){
		prefix[i]=prefix[i-1]+((i+1)*arr[i]);
	}
	if(l==0){
		return prefix[r];
	}
	else{
		return prefix[r]+prefix[l-1];
	}
}
int main(){
	int arr[]={2,3,5,4,6,1};
	int n=6;
	cout<<weightsum(arr,n,0,2)<<endl;
	return 0;
}
