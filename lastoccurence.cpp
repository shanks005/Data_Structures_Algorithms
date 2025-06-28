#include <bits/stdc++.h>
using namespace std;

int bsearch(int arr[],int n,int x){
	int low=0,high=n-1,mid;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]>x){
			high=mid-1;
		}
		else if(arr[mid]<x){
			low=mid+1;
		}
		else if(arr[mid]==x){
			if(mid==n-1||arr[mid]!=arr[mid+1]){
				return mid;
			}
			else{
				low=mid+1;
			}
		}
	}
	return -1;
}
int main(){
	int arr[]={10,20,20,20,30,40,50};
	int n=7,x=20;
	cout<<bsearch(arr,n,x)<<endl	
	return 0;
}
