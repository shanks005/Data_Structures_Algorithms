#include<bits/stdc++.h>
using namespace std;

vector <int> nextgreater(int arr[],int n){
	vector<int>vec;
	stack<int>st;
	st.push(arr[n-1]);
	vec.push_back(-1);
	for(int i=n-2;i>=0;i--){
		while(st.empty()==false&&st.top()<=arr[i]){
			st.pop();
		}
		int res=st.empty()?-1:st.top();
		vec.push_back(res);
		st.push(arr[i]);
	}
	reverse(vec.begin(),vec.end());
	return vec;
}
int main(){
	int arr[]={5,15,10,8,6,12,9,18},n=8;
	vector<int> x=nextgreater(arr,n);
	for(auto it:x){
		cout<<it<<" ";
	}
	return 0;
}
