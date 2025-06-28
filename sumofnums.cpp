#include<bits/stdc++.h>
using namespace std;

void sum(int n){
	if(n==0){
		return;
	}
	sum(n-1);
	cout<<n<<endl;
}
int main(){
	sum(8);
}

