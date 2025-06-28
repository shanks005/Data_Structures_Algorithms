#include <bits/stdc++.h>
using namespace std;

void mergesort(int arr[],int n){
	int low=0,high=n-1,mid=(low+high)/2,c=0;
	int arr1[mid],arr2[high-mid];
	for(int i=0;i<(mid+1);i++){
		arr1[i]=arr[i];
	}
	for(int i=mid+1;i<(high+1);i++){
		arr2[c]=arr[i];
		c++;
	}
	int i=0,j=0;w
	while(i<=mid && j<=(high-mid)){
		if(arr1[i]<arr2[j]){
			cout<<arr1[i]<<" ";
			i++;
		}
		else{
			cout<<arr2[j]<<" ";
			j++;
		}
	}
}
int main(){
	int arr[]={10,15,20,40,8,11,55},n=7;
	mergesort(arr,n);
	return 0;
}
