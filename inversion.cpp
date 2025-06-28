/*
#include<bits/stdc++.h>
using namespace std;

int inversion(int arr[],int n){
	int c=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				c++;
			}
		}
	}
	return c;
}
int main(){
	int arr[]={40,30,20,10},n=4;
	cout<<inversion(arr,n)<<endl;
	return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int inversion(int arr[],int n){
	int c=0,x=0;
	int low=0,high=n-1,mid=(low+high)/2;
	int arr1[mid],arr2[high-mid];
	for(int i=0;i<mid+1;i++){
		arr1[i]=arr[i];
	}
	for(int j=mid+1;j<high+1;j++){
		arr2[x]=arr[j];
		x++;
	}
	int i=0,j=0;
	while((i<mid)&&j<(high-mid)){
		if(arr1[i]>=arr2[j]){
			c++;
			j++;
		}
		else if(arr2[j]>=arr1[i]){
			i++;
		}
	}
	while(i<mid){
		if(i>0&&arr1[i]<=arr1[i-1]){
			c++;
		}
	}
	while(j<(high-mid)){
		if(j>0&&arr2[j]<=arr2[j-1]){
			c++;
		}
	}
	return c;
}

int main(){
	int arr[]={2,1,4,3,5},n=5;
	cout<<inversion(arr,n);
	return 0;
}
