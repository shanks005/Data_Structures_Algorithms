#include<bits/stdc++.h>
using namespace std;


long long fibonacci_sum(long long n){
	vector<long long> dp(n+1);
	dp[0]=0;
	dp[1]=1;
	if(n>=0 && n<=9){
		return pow(n,2);
	}
	int sum=0;
	for(int i=2;i<n;i++){
		dp[i]=dp[i-1]+dp[i-2];
		sum+=pow(dp[i],2);
	}
	return sum%10;
}
int main(){
	long long n;
	cin >> n;
	cout << fibonacci_sum(n) << endl;
	return 0;
}
