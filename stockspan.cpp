#include <bits/stdc++.h>
using namespace std;

void previousgreaterelement(int arr[],int n){
	stack<int>st;
	st.push(arr[0]);
	for(int i=0;i<n;i++){
		while((st.empty()==false)&&st.top()<=arr[i]){
			st.pop();
		}
		int pg=st.empty()?-1:st.top();
		cout<<pg<<" ";
		st.push(arr[i]);
	}
}
int main(){
	int arr[]={20,30,10,5,15},n=5;
	previousgreaterelement(arr,n);
	return 0;
}

		
