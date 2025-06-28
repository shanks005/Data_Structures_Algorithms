//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr[]: input array
    // Function to find the maximum index difference.
    int maxIndexDiff(vector<int>& arr){
        int max1=0,i=0,j=arr.size()-1;
        while(i<=j){
            if(arr[i]>=arr[j]){
                if(arr[i]<=arr[j-1]){
                    j--;
                    max1=max(max1,j-i);
                }
                else if(arr[i+1]<=arr[j]){
                    i++;
                    max1=max(max1,j-i);
                }
                else{
                    i++;
                    j--;
                }
            }
            else{
                max1=max(max1,j-i);
                i++;
                j--;
            }
        }
        return max1;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;

        // calling maxIndexDiff() function
        cout << ob.maxIndexDiff(nums) << endl;
    }

    return 0;
}
// } Driver Code Ends
