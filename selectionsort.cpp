#include <bits/stdc++.h>
using namespace std;

void selection(int arr[],int n){
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]>arr[min]){
				min=j;
			}
		}
		swap(arr[min],arr[i]);
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[]={10,5,8,20,2,18},n=6;
	selection(arr,n);
	return 0;
}

/* this is for descending order, for ascending order we need to change it as arr[j]<arr[j+1] in the condition */


