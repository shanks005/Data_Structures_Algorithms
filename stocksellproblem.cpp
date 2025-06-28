#include <bits/stdc++.h>
using namespace std;

int stocksell(int arr[],int n){
	int prof=0;
	for(int i=0;i<n-1;i++){
		if(arr[i+1]>arr[i]){
			prof+=arr[i+1]-arr[i];
		}
	}
	return prof;
}
int main(){
	int arr[]={100,180,260,310,40,535,695},n=7;
	cout<<stocksell(arr,n)<<endl;
	return 0;
}

