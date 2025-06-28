#include<bits/stdc++.h>
using namespace std;

int maxdiff(vector<int>&nums,int n){
	int res=nums[1]-nums[0],minval=nums[0];
	for(int i=1;i<n;i++){
		res=max(res,nums[i]-minval);
		minval=min(nums[i],minval);
	}
	return res;
}
int main(){
	vector<int>nums={2,3,10,6,4,8,1};
	int n=nums.size();
	cout<<maxdiff(nums,n)<<endl;
	return 0;
}
