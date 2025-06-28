#include<bits/stdc++.h>
using namespace std;

void averageWaitingTime(vector<vector<int>>& customers) {
        vector<int>sum;
        int sum1=0,n=customers.size();
        int wait_time=customers[0][1];
        int tot_time=customers[0][0]+customers[0][1];
        sum.push_back(wait_time);
        for(int i=1;i<n;i++){
            wait_time=0;
            tot_time+=customers[i][1];
            wait_time=tot_time-customers[i][0];
            sum.push_back(wait_time);
        }
        for(int i=0;i<sum.size();i++){
			cout<<sum[i]<<" ";
		}
}	
int main(){
	vector<vector<int>>customers;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin>>customers[i][j];
		}
	}
	averageWaitingTime(customers);
	return 0;
}
