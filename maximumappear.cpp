#include <bits/stdc++.h>
using namespace std;

int maxappear(int left[],int right[],int n){
	int freq[100]={0};
	for(int i=0;i<n;i++){
		for(int j=left[i];j<=right[i];j++){
			freq[j]+=1;
		}
	}
	int res=0;
	for(int i=1;i<100;i++){
		if(freq[i]>freq[res]){
			res=i;
		}
	}
	return res;
}
int main(){
	int left[]={1,2,4},right[]={4,5,7},n=3;
	cout<<maxappear(left,right,n)<<endl;
	return 0;
}
