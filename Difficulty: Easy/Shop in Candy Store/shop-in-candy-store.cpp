//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        int min = 0;
        sort(candies,candies+N);
        int buy = 0;
        int free = N-1;
        while(buy<=free){
            min = min+candies[buy];
            buy++;
            free = free-K;
        }
        int max = 0;
        buy = N-1;
        free = 0;
        while(buy>=free){
            max = max+candies[buy];
            buy--;
            free = free+K;
        }
        vector<int> ans;
        ans.push_back(min);
        ans.push_back(max);
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
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends