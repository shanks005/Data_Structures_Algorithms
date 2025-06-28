//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int exactly3Divisors(int N)
    {
        int x=0;
        for(int i=2;i*i<=N;i++){
            int j=2;
            while(j*j<=i)
            if(i%j!=0&&i%(j+2)!=0){
                x++;
            }
            else{
                j++;
            }
        }
        return x;
    }
};
//{ Driver Code Starts.


int main()
 {
    int T;

    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;

        //taking N
        cin>>N;
        Solution ob;
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}
// } Driver Code Ends
