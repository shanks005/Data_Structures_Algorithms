//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
class Solution{
    public:
    
    int count1(vector<int>&arr,int num){
        int c=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==num){
                c++;
            }
        }
        return c;
    }
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        int i=1,res=0,temp[N]={0};
        while(i<=P&&res<N){
            int x=count1(arr,i);
            temp[res]=x;
            res++;
            i++;
        }
        for(int i=0;i<N;i++){
            arr[i]=temp[i];
        }
    }
};


//{ Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}





// } Driver Code Ends
