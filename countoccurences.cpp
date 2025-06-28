#include <bits/stdc++.h>
using namespace std;

int bsearch(int arr[],int n,int x){
	int high=n-1,low=0,mid,c=0;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]<x){
			high=mid-1;
		}
		else if(arr[mid]>x){
			low=mid+1;
		}
		else if(arr[mid]==x){
			for(int i=mid;i>1;i--){
				if(arr[i]==arr[i-1]){
					c++;
				}
			}
		}
	}
	return c;
}
/* int countoccurence(int arr,int n,int x){
 * int first=firstoccurence(arr,n,x)
 * if(first==-1){
 * return 0;
 * else{
 * return lastoccurence(arr,n,x)-first+1;
 * }
 * }
 * }*/

int main(){
	int arr[]={10,20,20,20,30,40,50};
	int n=7,x=20;
	cout<<bsearch(arr,n,x)<<endl;
	return 0;
}
