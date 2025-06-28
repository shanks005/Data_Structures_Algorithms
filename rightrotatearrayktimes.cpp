class Solution {
public:
    void rotate(vector<int>&arr,int k){
        int n=arr.size(),i,j;
        if(k>n){
            k=k%n;
        }
        for(i=n-k,j=n-1;i<j;i++,j--){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        for(i=0,j=n-k-1;i<j;i++,j--){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        for(i=0,j=n-1;i<j;i++,j--){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
};
