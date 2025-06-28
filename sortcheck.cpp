#include <bits/stdc++.h>
using namespace std;

int sortcheck(int arr[],int n){
	for(int i=1;i<n-1;i++){
		if(arr[i]<arr[i-1]){
			return false;
		}
	}
	return true;
}
int main(){
	int arr[]={1,2,3,4};
	int n=4;
	cout<<sortcheck(arr,n);
	return 0;
}
