#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[],int n){
	for(int i=1;i<n;i++){
		int key=arr[i];
		int j=i-1;
		while(j>=0&&arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
int main(){
	int arr[]={5,20,40,60,10,30},n=6;
	insertion(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

/* this is for ascending order if we were to sort in descending order then we do arr[j]<key */
