#include <bits/stdc++.h>
using namespace std;

bool triplets(int arr[],int n,int sum){
	int low=0,high=n-1;
	while(low<high){
		int x=sum-arr[low];
		int i=low+1,j=high;
		while(i<j){
			if(arr[i]+arr[j]==x){
				return true;
			}
			else if(arr[i]+arr[j]>x){
				j-=1;
			}
			else if(arr[i]+arr[j]<x){
				i+=1;
			}
		}
		low++;
	}
	return false;
}
int main(){
	int arr[]={2,3,4,8,9,20,40},sum=32,n=7;
	cout<<triplets(arr,n,sum)<<endl;
	return 0;
}
