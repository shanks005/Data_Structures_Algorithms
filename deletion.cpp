#include <bits/stdc++.h>
using namespace std;

int deletion(int arr[],int n,int x){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==x)
			break;
	}
	if(i==n)
		return n;
	for(int j=i;j<n-1;j++){
		arr[j]=arr[j+1];
	}
	return(n-1);
}
int main(){
	int arr[]={3,8,12,5,6},x=12,n=5;
	cout<<"before deletion"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	n=deletion(arr,n,x);
	cout<<"After deletion"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" "; 
	}
	return 0;
}
