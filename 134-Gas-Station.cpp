class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas =0;
        int totalCost =0;
        int fuel =0;
        int index = 0;
        for(int i =0;i<gas.size();i++){
            totalGas +=gas[i];
        }
        for(int i=0;i<cost.size();i++){
         totalCost += cost[i];
        }
        if(totalGas<totalCost){
            return -1;
        }
        for(int i =0;i<gas.size();i++){
           int diff = gas[i]- cost[i];
            fuel+=diff;
            if(fuel<0){
              index=i+1;
                fuel =0;
            }
          
        }
        return index;
    }
};