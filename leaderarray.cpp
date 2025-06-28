#include <bits/stdc++.h>
using namespace std;

void leader(int arr[],int n){
	int max=arr[n-1];
	vector<int> bin;
	for(int i=n-2;i>0;i--){
		if(arr[i]>=max){
			bin.push_back(max);
			max=arr[i];
		}
	}
	int low=0,high=bin.size()-1;
	while(low<high){
		swap(bin[high],bin[low]);
		high--;
		low++;
	}
	for(int i=0;i<bin.size();i++){
		cout<<bin[i]<<" ";
}
cout<<endl;
}
int main(){
	int arr[]={7,10,4,10,6,5,2},n=7;
	leader(arr,n);
	return 0;
}
