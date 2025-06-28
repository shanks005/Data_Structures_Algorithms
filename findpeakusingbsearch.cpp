#include <bits/stdc++.h>
using namespace std;

int bsearch(int arr[],int n){
	int high=-1,low=0,mid;
	while(low<=high){
		mid=(low+high)/2;
		if((mid==0||(arr[mid-1]<=arr[mid])&&(mid==n-1||arr[mid+1]<=arr[mid])){
			return arr[mid];
		}
		else{
			if(mid>0&&arr[mid-1]>=:warr[mid]){
				high=mid-1;
			}
			else{
				low=mid+1;
			}
		}
	}
	return -1;
}

int main(){
	int arr[]={5,20,40,30,20,50,60};
	int n=7;
	cout<<bsearch(arr,n)<<endl;
	return 0;
}
