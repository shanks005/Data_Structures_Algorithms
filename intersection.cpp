#include <bits/stdc++.h>
using namespace std;

void intersection(int arr1[],int arr2[],int n1,int n2){
	int i=0,j=0;
	while(i<n1&&j<n2){
		if(i>0&&arr1[i]==arr1[i-1]){
			i++;
			continue;
		}
		if(arr1[i]==arr2[j]){
			cout<<arr1[i]<<" ";
			i++;
			j++;
		}
		else if(arr1[i]>arr2[j]){
			j++;
		}
		else if(arr1[i]<=arr2[j]){
			i++;
		}
	}
}
int main(){
	int arr1[]={3,5,10,10,10,15,15,20},arr2[]={5,10,10,15,30},n1=8,n2=5;
	intersection(arr1,arr2,n1,n2);
	return 0;
}
