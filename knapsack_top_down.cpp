#include<bits/stdc++.h>

using namespace std;

int t[n+1][w+1];


int knapsack(vector<int>&wt,vector<int>&val,int W,int n){
	for(int i=0;i<n+1;i++){
		for(int j=0;j<w+1;j++){
			if(i==0||j==0){
				t[i][j]=0;
			}
		}
	}
	for(int i=1;i<n+1;i++){
		for(int j=1;j<n+1;j++){
			if(wt[i-1]<=j){
				t[i][j]=max((val[i-1]+t[n-1][W-wt[i-1]]),t[n-1][W]);
				return t[i][j];
			}
			else{
				t[i][j]=t[n-1][W];
				return t[i][j];
			}
		}
	}
}

int main(){
	int n;
	int x,y;
	int W;
	cin >> n >> W;
	vector <int> wt(n+1);
	vector <int> val(n+1);

	for(int i=0;i<n;i++){
		cin >> x >> y;
		wt.push_back(x);
		wt.push_back(y);
	}

	cout << knapack(wt,val,W,n) << endl;
	return 0;
}
