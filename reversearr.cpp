#include<bits/stdc++.h>
using namespace std;

void reversearr(int arr[],int n){
	int high=n-1,low=0;
	while(low<high){
		int temp;
		temp=arr[low];
		arr[low]=arr[high];
		arr[high]=temp;
		low++;
		high--;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[]={10,2,5,30};
	int n=4;
	reversearr(arr,n);
	return 0;
}
