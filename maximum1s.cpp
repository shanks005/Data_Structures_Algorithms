#include <bits/stdc++.h>
using namespace std;

int max1s(int arr[],int n){
	int c=0,max1=0;
	for(int i=0;i<n;i++){
		if(arr[i]==1){
			c++;
		}
		else{
			max1=max(max1,c);
			c=0;
		}
	}
	return max1;
}
int main(){
	int arr[]={1,0,1,1,1,1,0,1,1},n=9;
	cout<<max1s(arr,n)<<endl;
	return 0;
}
