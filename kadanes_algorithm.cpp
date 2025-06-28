#include<bits/stdc++.h>
using namespace std;


void kadanes_algorithm(int arr[],int n){
	int curr_max=arr[0];
	int endindex;
	int global_max=arr[0];
	for(int i=1;i<n;++i){
		curr_max=max(arr[i],arr[i]+curr_max);
		if(curr_max>global_max){
			global_max=curr_max;
			endindex=i;
		}
	}
	int start_index=endindex;
	while(start_index>=0){
		global_max-=arr[start_index];
		if(global_max==0){
			break;
		}
		start_index--;
	}
	for(int i=start_index;i<=endindex;++i){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
	int n=sizeof(arr)/sizeof(int);
	kadanes_algorithm(arr,n);
	return 0;
}
