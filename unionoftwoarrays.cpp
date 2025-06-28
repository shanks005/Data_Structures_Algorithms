#include <bits/stdc++.h>
using namespace std;

void union1(int arr1[],int arr2[],int n1,int n2){
	int i=0,j=0;
	while(i<n1&&j<n2){
		if(i==0||arr1[i]==arr1[i-1]){
			i++;
			continue;
		}
		if(j==0||arr2[j]==arr2[j-1]){
			j++;
			continue;
		}
		else if(arr1[i]>arr2[j]){
			cout<<arr2[j]<<" ";
			j++;
		}
		else if(arr1[i]<arr2[j]){
			cout<<arr1[i]<<" ";
			i++;
		}
		else if(arr1[i]==arr2[j]){
			cout<<arr1[i]<<" ";
			i++;
			j++;
		}
	}
	while(i<n1){
		if(i==0||arr1[i]!=arr1[i-1]){
			cout<<arr1[i]<<" ";
			i++;
		}
	}
	while(j<n2){
		if(j==0||arr2[j]!=arr2[j-1]){
			cout<<arr2[j]<<" ";
			j++;
		}
	}
}
int main(){
	int arr1[]={3,5,8},arr2[]={2,8,9,10,15},n1=3,n2=5;
	union1(arr1,arr2,n1,n2);
	return 0;
}


