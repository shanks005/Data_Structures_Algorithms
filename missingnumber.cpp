#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,sum=0;
	cin>>n;
	long long arr[n-1];
	for(long long i=0;i<n-1;i++){
		cin>>arr[i];
	}
	long long tempsum=(n*(n+1)/2);
	for(long long i=0;i<n-1;i++){
		sum+=arr[i];
	}
	if(tempsum>sum){
		cout<<tempsum-sum<<" ";
	}
	else{
		return 0;
	}
}
