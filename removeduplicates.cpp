#include <bits/stdc++.h>
using namespace std;

int removeduplicates(int arr[],int n){
	int res=1;
	for(int i=1;i<n;i++){
		if(arr[i]!=arr[res]){
			arr[res]=arr[i];
			res++;
		}
	}
	return res;
}
int main(){
	int arr[]={10,20,20,30,30,30,30};
	int n=7;
	cout<<removeduplicates(arr,n)<<endl;
	return 0;
}
