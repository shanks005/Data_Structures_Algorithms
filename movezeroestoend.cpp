#include <iostream>
using namespace std;


void movezeroes(int arr[],int n){
	int count=0;
	for(int i=0;i<n;i++){
		int temp;
		if(arr[i]!=0){
			temp=arr[i];
			arr[i]=arr[count];
			arr[count]=temp;
			count++;
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[]={10,8,0,0,12,0};
	int n=6;
	movezeroes(arr,n);
	return 0;
}
	
