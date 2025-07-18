//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    
    int divisors(int i){
        int sum=0;
        for(int a=1;a<=i;a++){
            if(i%a==0){
                sum+=a;
            }
        }
        return sum;
    }
    long long sumOfDivisors(int N)
    {
        long long ans=0;
        for(int i=1;i<=N;i++){
            int x=divisors(i);
            ans+=x;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends
