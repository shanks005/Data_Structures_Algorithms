#include<bits/stdc++.h>
using namespace std;

int main(){
	array<int,3>A;
	cin>>A[0]>>A[1]>>A[2];
	for(int i=0;i<5;i++){
		*min_element(A.begin(),A.end())++;
	}
	cout<<A[0]*A[1]*A[2]<<endl;
}
