#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[],int n){
	int temp=arr[0];
	for(int i=1;i<n;i++){
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[]={1,2,3,4,5},n=5;
	rotate(arr,n);
	return 0;
}
