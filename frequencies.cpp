#include <bits/stdc++.h>
using namespace std;

void frequency(int arr[],int n){
	int c=0;
	for(int i=0;i<n;i++){
		if(arr[i]==arr[i+1]){
			c++;
		}
		else if(arr[i]!=arr[i+1]){
			c++;
			cout<<arr[i]<<c<<endl;
			c=0;
		}
	}:w
}

int main(){
	int arr[]={10,10,10,25,30,30},n=6;
	frequency(arr,n);
	return 0;
}

