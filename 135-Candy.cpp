class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int total =0;
        vector<int> candies(n,1);
        // left to right traversal//
        for(int i=1;i<n;i++){
        if(ratings[i] > ratings[i-1] && candies[i]<=candies[i-1]){
            candies[i] = candies[i-1] + 1;
        }
        }
        // right to left traversal//
        for(int i =n-2;i>=0;i--){
        if(ratings[i]>ratings[i+1] && candies[i]<=candies[i+1]){
            candies[i] = candies[i+1] + 1;
        }
        }
        for (auto i :candies){
            total+=i;
        }
        return total;
    }
};