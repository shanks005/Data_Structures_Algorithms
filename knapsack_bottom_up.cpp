class Solution {
  public:
  
    int t[1002][1002];
    
    int knapsack1(vector<int>&wt,vector<int>&val,int W,int n){
        if(n==0||W==0){
            return 0;
        }
        if(t[n][W]!=-1){
            return t[n][W];
        }
        if(wt[n-1]<=W){
            t[n][W]=max((val[n-1]+knapsack1(wt,val,W-wt[n-1],n-1)),knapsack1(wt,val,W,n-1));
            return t[n][W];
        }
        else{
            t[n][W]=knapsack1(wt,val,W,n-1);
            return t[n][W];
        }
    }
    
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n=wt.size();
        memset(t,-1,sizeof(t));
        return knapsack1(wt,val,W,n);
    }
}
