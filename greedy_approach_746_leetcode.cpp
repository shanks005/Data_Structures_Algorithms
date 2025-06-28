class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int sum=0;
        int traversal,idx;
        if(cost.size()%2==0){
            traversal=2;
            idx=0;
        }
        else{
            traversal=1;
            idx=1;
        }
        int max=*max_element(cost.begin(),cost.end());
        for(int i=idx;i<cost.size();){     
            if((sum+cost[i])>=max){
                if((sum+cost[i-1])>=max){
                    return sum;
                }
                else{
                    sum=sum+cost[i-1];
                    i-=1;
                }
            }
            else{
                sum+=cost[i];
                i+=traversal;
            }
        }
        return sum;
    }
};
