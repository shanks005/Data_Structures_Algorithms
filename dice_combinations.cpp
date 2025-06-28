#include<bits/stdc++.h>
using namespace std;

#define MOD 10000000007

void solve(int n) {
    vector<int> dp(n+1);

    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 6; j++){
            if(j <= i){
                dp[i] = (dp[i] + dp[i-j]) % MOD;
            }
        }
    }
    cout << dp[n] << endl;
}

int main() {
    int t;
    int n;
    cin >> t;
    while(t != 0){
        cin >> n;
        solve(n);
        t--;
    }
}

