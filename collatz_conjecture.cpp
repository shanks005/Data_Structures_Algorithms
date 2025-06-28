#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	while(n!=1){
		if(n%2==0){
			cout<<n<<" ";
			n/=2;
		}
		else if((n%2)!=0){
			cout<<n<<" ";
			n=((3*n)+1);
		}
	}
	cout<<1;
}
