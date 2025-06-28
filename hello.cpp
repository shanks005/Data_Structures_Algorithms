#include <iostream>
using namespace std;
int recursion(int n){
	if(n==0||n==1){
		return 1;
	}
	else{
		return n*recursion(n-1);
	}
}
int main(){
	int n;
	cin>>n;
	cout<<recursion(n)<<endl;
	return 0;
}
