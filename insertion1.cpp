#include <bits/stdc++.h>
using namespace std;

int insertion(int arr[],int n,int x,int pos,int cap){
	int i;
	if(n==cap)
		return n;
	int idx=pos-1;
	for(int i=n-1;i>=idx;i--){
		arr[i+1]=arr[i];
	}
	arr[idx]=x;
	return(n+1);
}
int main(){
	int arr[5],x=6,pos=2,cap=5,n=3;
	arr[0]=5,arr[1]=10,arr[2]=20;
	cout<<"before insertion"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"after insertion"<<endl;
	n=insertion(arr,n,x,pos,cap);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
