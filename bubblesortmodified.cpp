#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n){
	for(int i=0;i<n;i++){
		bool swapped=false;
		for(int j=0;j<n-i-1;j++){
			if(arr[j]<arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped=true;
			}
		}
		if(swapped==false){
			break;
		}
	}
}

int main(){
	int arr[]={10,5,8,20,2,18},n=6;
	bubblesort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
