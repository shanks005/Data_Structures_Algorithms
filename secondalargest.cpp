#include <bits/stdc++.h>
using namespace std;

int secondlargest(int arr[],int n){
	int res=-1,largest=0;
	for(int i=1;i<n;i++){
		if(arr[i]>arr[largest]){
			res=largest;
			largest=i;
		}
		else if(arr[i]!=arr[largest]){
			if(res==-1||arr[i]>arr[res])
				res=i;
		}
	}
	return res;
}
int main(){
	int arr[]={5,8,12,10,15};
	int n=5;
	cout<<secondlargest(arr,n)<<endl;
	return 0;
}
