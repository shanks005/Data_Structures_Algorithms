//{ Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int first(int arr[],int x,int n) {
        int high=n-1,low=0,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]<x){
                low=mid+1;
            }
            else if(arr[mid]>x){
                high=mid-1;
            }
            else if(arr[mid]==x){
                if(mid==n-1||arr[mid]!=arr[mid-1]){
                    return mid;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
    int last(int arr[],int x,int n){
        int high=n-1,low=0,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]<x){
                low=mid+1;
            }
            else if(arr[mid]>x){
                high=mid-1;
            }
            else if(arr[mid]==x){
                if(mid==n-1||arr[mid]!=arr[mid+1]){
                    return mid;
                }
                else{
                    low=mid+1;
                }
            }
        }
        return -1;
    }
    int countOccurence(int arr[],int n,int k){
        int i=0,count,d=0,first1,last1;
        sort(arr,arr+n);
        while(i<n-1){
            if(arr[i]==arr[i+1]){
                first1=first(arr,arr[i],n);
                last1=last(arr,arr[i],n);
            }
            count=((last1-first1)+1);
            if(count>(n/k)){
                d++;
            }
            i+=count;
        }
        return d;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        int k;
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends
