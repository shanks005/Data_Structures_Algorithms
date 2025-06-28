#include <bits/stdc++.h>
using namespace std;

int evenodd(int arr[],int n){
	int c=1,max1=0;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]%2==0){
			if(arr[i+1]%2!=0){
				c++;
			}
			else{
				max1=max(max1,c);
				c=1;
			}
		}
		else{
			if(arr[i+1]%2==0){
				c++;
			}
			else{
				max1=max(max1,c);
				c=1;
			}
		}
	}
	return max1;
}
int main(){
	int arr[]={1,2,3,4,5,7,9},n=7;
	cout<<evenodd(arr,n)<<endl;
	return 0;
}

