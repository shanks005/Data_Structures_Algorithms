#include <bits/stdc++.h>
using namespace std;

int maxguests(int arr[],int dep[],int n1,int n2){
	sort(arr,arr+n1);
	sort(dep,dep+n2);
	int res=1,curr=0,i=0,j=0;
	while(i<n1&&j<n2){
		if(arr[i]<=dep[j]){
			curr++;
			i++;
		}
		else if(arr[i]>=dep[j]){
			res=max(res,curr);
			curr--;
			j++;
		}
	}
	return res;
}
int main(){
	int arr[]={900,600,700},dep[]={730,800,1000},n1=3,n2=3;
	cout<<maxguests(arr,dep,n1,n2)<<endl;
	return 0;
}
