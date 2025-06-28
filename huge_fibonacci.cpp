#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	long long m;
	cin >> m >> n;
	if(m>n){
		return -1;
	}
	vector<long long> dp(n+1);
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	cout << n%m;
	return 0;
}

