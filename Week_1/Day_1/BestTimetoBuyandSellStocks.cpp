class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minimum=prices[0];
        int maximum=0;


        for(int i=0;i<prices.size();i++)
        {
            minimum=min(prices[i],minimum);
            profit=prices[i]-minimum;
            maximum=max(maximum,profit);
        }
        return maximum;
    }
};