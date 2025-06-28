#include<bits/stdc++.h>

using namespace std;

long long pairwise(vector<long long>&arr,int size){
	if(size==2){
		return (arr[0]*arr[1]);
	}
	sort(arr.begin(),arr.end());
	return (arr[size-2]*arr[size-1]);
}
int main(){
	int n;
	vector<long long> arr;
	cin >> n;
	long long x;
	for(int i=0;i<n;i++){
		cin >> x;
		arr.push_back(x);
	}
	cout << pairwise(arr,n);
	return 0;
}
