#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long long l,r;
	cin>>n;
	while(n--){
		cin>>l>>r;
		if(l*2<=r){
			cout<<l<<" "<<(2*l)<<endl;
		}
		else{
			cout<<-1<<" "<<-1<<endl;
		}
	}
}
