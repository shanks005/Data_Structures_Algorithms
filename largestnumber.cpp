#include <bits/stdc++.h>
using namespace std;

int largest(int arr[],int n){
	int max=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}
int main(){
	int arr[]={10,5,20,8,12,32,64,128,98};
	int n=9;
	cout<<largest(arr,n)<<endl;
	return 0;
}
