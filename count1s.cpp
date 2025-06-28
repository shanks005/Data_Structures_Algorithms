#include <bits/stdc++.h>
using namespace std;

int first(int arr[],int n){
	int high=n-1,low=0,mid;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]<1){
			high=mid-1;
		}
		else if(arr[mid]==1){
			if(mid==n-1||arr[mid]!=arr[mid-1]){
				return mid;
			}
			else{
				high=mid-1;
			}
		}
	}
	return -1;
}

int last(int arr[],int n){
	int high=n-1,low=0,mid;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]<1){
			high=mid-1;
		}
		else if(arr[mid]==1){
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

int countoccurence(int arr[],int n){
	int first1=first(arr,n);
	if(first1==-1){
		return 0;
	}
	else{
		return last(arr,n)-first1+1;
	}
}

int main(){
	int arr[]={0,0,0,1,1,1,1};
	int n=7;
	cout<<countoccurence(arr,n)<<endl;
	return 0;
}

